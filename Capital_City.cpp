#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll SZ = 1e6 + 5;
ll vis[SZ];
vector<int> adj[SZ];
stack<ll> st;
vector<ll> transpose[SZ];
vector<pair<ll, ll>> vp;

void topo(int node)
{
    vis[node] = 1;
    for (auto child : adj[node])
    {
        if (vis[child] == 0)
        {
            topo(child);
        }
    }
    st.push(node);
}

void revDfs(ll node)
{
    cout << node << " ";
    vis[node] = 1;
    for (auto it : transpose[node])
    {
        if (!vis[it])
        {
            revDfs(it);
        }
    }
}

void trans(ll m)
{
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < m; i++)
    {
        transpose[vp[i].second].push_back(vp[i].first);
    }
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
        vp.push_back({u, v});
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            topo(i);
        }
    }

    trans(m);

    while (!st.empty())
    {
        ll node = st.top();
        st.pop();
        if (vis[node] == 0)
        {
            cout << "SCC: ";
            revDfs(node);
        }
        cout << endl;
    }

    return 0;
}
