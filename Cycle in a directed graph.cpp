#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll sz = 1e5 + 5;

ll vis[sz];
ll dfsVis[sz];
vector<ll> adj[sz];

bool dfs(int node)
{
    vis[node] = 1;
    dfsVis[node] = 1;

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            if (dfs(child) == true)
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
    return false;
}

int main()
{
    FAST;
    ll n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n - 1; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i) == 1)
            {
                cout << "Cycle" << endl;
                return 0;
            }
        }
    }

    cout << "No cycle" << endl;

    return 0;
}
