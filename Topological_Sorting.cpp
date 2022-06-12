#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const int sz = 1e5 + 7;

vector<int> adj[sz];
stack<int> stk;
bool vis[sz];
bool dfsVis[sz];

bool findTopoSort(int node)
{
    vis[node] = 1;
    dfsVis[node] = 1;

    sort(adj[node].rbegin(), adj[node].rend());

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            if (findTopoSort(child) == 1)
            {
                return true;
            }
        }
        else if (dfsVis[child] == 1)
        {
            return true;
        }
    }
    dfsVis[node] = 0;
    stk.push(node);
    return false;
}

int main()
{
    FAST;

    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = n; i >= 1; i--)
    {
        if (vis[i] == 0)
        {
            if (findTopoSort(i) == 1)
            {
                cout << "Sandro fails." << endl;
                return 0;
            }
        }
    }

    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
