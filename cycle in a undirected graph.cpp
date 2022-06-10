#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll sz = 1e5 + 5;

ll vis[sz];
vector<ll> adj[sz];

bool dfs(int node, int par)
{
    vis[node] = 1;

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            if (dfs(child, node) == true)
            {
                return true;
            }
            else
            {
                if (child != par)
                {
                    return true;
                }
            }
        }
    }
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
        adj[v].push_back(u);
    }

    bool ans = dfs(1, 0);

    if (ans == false)
    {
        cout << "No cycle" << endl;
    }
    else
    {
        cout << "Cycle" << endl;
    }

    return 0;
}
