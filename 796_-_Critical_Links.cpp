#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

vector<pair<ll, ll>> vp;

const ll SZ = 1e6 + 5;
ll tin[SZ];
ll low[SZ];
ll vis[SZ];
vector<ll> adj[SZ];
ll timer;

void dfs(ll node, ll parent, ll timer)
{
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    for (auto child : adj[node])
    {
        if (child == parent)
        {
            continue;
        }
        if (vis[child] == 0)
        {
            dfs(child, node, timer);
            low[node] = min(low[node], low[child]);
            if (low[child] > tin[node])
            {
                vp.push_back({min(child, node), max(node, child)});
            }
        }
        else
        {
            low[node] = min(low[node], tin[child]);
        }
    }
}

void init()
{
    memset(vis, 0, sizeof(vis));
    memset(tin, -1, sizeof(tin));
    memset(low, -1, sizeof(low));
    for (int i = 0; i < n; i++)
    {
        adj[i].clear();
    }
}

int main()
{
    FAST;
    ll n;
    while (cin >> n)
    {
        vp.clear();
        for (int i = 0; i < n; i++)
        {
            ll u, v, num;
            char left, right;
            cin >> u >> left >> num >> right;
            for (int i = 0; i < num; i++)
            {
                cin >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }

        // cout << n << " n " << endl;
        timer = 0;
        for (ll i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, -1, timer);
            }
        }

        sort(vp.begin(), vp.end());

        cout << vp.size() << " critical links" << endl;
        for (int i = 0; i < vp.size(); i++)
        {
            cout << vp[i].first << " - " << vp[i].second << endl;
        }
        cout << endl;
    }

    return 0;
}
