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
vector<ll> tpo;

void dfs(int node)
{
    vis[node] = 1;
    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            dfs(node);
        }
    }
    tpo.push_back(node);
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
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }

    reverse(tpo.begin(), tpo.end());

    for (int i = 0; i < tpo.size(); i++)
    {
        cout << tpo[i] << " ";
    }
    cout << endl;

    return 0;
}
