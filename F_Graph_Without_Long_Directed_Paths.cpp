#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

vector<pair<ll, ll>> vp;

const ll sz = 1e6 + 5;
vector<ll> adj[sz];
ll vis[sz];
ll color[sz];

bool dfs(int node, int col)
{
    vis[node] = 1;
    color[node] = col;

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            if (dfs(child, col ^ 1) == false)
            {
                return false;
            }
        }
        else if (color[node] == color[child])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    FAST;

    ll n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
        vp.push_back({u, v});
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (dfs(i, 0) == false)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < m; i++)
    {
        if (color[vp[i].first] > color[vp[i].second])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;

    return 0;
}
