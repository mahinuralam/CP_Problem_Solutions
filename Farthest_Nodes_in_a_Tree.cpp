#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll sz = 1e5 + 5;

ll vis[sz];
vector<pair<ll, ll>> adj[sz];

ll mx_cost, mx_node;

void dfs(ll node, ll cost)
{
    vis[node] = 1;

    if (cost > mx_cost)
    {
        mx_cost = cost;
        mx_node = node;
    }

    for (int i = 0; i < adj[node].size(); i++)
    {
        ll x = adj[node][i].first;
        ll w = adj[node][i].second;
        // cout << x << " " << w << endl;
        if (vis[x] == 0)
        {
            dfs(x, cost + w);
        }
    }
}

int main()
{
    FAST;

    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
        }

        for (int i = 0; i < n - 1; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        memset(vis, 0, sizeof(vis));
        mx_cost = -1;

        // cout << "ASD" << endl;
        dfs(0, 0);

        // cout << mx_cost << endl;
        // cout << mx_node << endl;

        memset(vis, 0, sizeof(vis));

        mx_cost = -1;
        dfs(mx_node, 0);

        cout << "Case " << ++tc << ": " << mx_cost << endl;
    }

    return 0;
}
