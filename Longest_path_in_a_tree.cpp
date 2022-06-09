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
ll mx_dis, mx_node;

void dfs(ll node, ll d)
{
    vis[node] = 1;

    if (d > mx_dis)
    {
        mx_dis = d;
        mx_node = node;
    }

    for (int child : adj[node])
    {
        if (vis[child] == 0)
        {
            dfs(child, d + 1);
        }
    }
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

    mx_dis = -1;
    dfs(1, 0);

    memset(vis, 0, sizeof(vis));

    mx_dis = -1;
    dfs(mx_node, 0);

    cout << mx_dis << endl;

    return 0;
}
