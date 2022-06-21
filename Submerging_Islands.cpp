#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll SZ = 1e6 + 5;
ll tin[SZ];
ll low[SZ];
ll vis[SZ];
ll isArticulation[SZ];
vector<ll> adj[SZ];
ll timer;

void dfs(ll node, ll parent, ll timer)
{
    vis[node] = 1;
    tin[node] = low[node] = timer++;
    ll childCnt = 0;
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
            if (low[child] >= tin[node] && parent != -1)
            {
                isArticulation[node] = 1;
            }
        }
        else
        {
            low[node] = min(low[node], tin[child]);
        }
    }

    if (parent == -1 && childCnt > 1)
    {
        isArticulation[node] = 1;
    }
}

void init(ll n)
{
    memset(vis, 0, sizeof(vis));
    memset(isArticulation, 0, sizeof(isArticulation));
    memset(tin, -1, sizeof(tin));
    memset(low, -1, sizeof(low));
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
}

int main()
{
    FAST;

    while (true)
    {
        ll n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        init(n);
        for (int i = 1; i <= m; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // cout << n << " n " << endl;
        timer = 0;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, -1, timer);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (isArticulation[i] != 0)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
