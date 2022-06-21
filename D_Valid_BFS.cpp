#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'

using namespace std;

const ll MXSZ = 1e6 + 7;

vector<ll> adj[MXSZ];
ll vis[MXSZ];

vector<ll> ans;
ll order[MXSZ];

bool cmp(int a, int b)
{
    return order[a] < order[b];
}

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        ans.push_back(p);
        for (int i = 0; i < adj[p].size(); i++)
        {
            if (vis[adj[p][i]] == false)
            {
                q.push(adj[p][i]);
                vis[adj[p][i]] = true;
            }
        }
    }
}

int main()
{
    FAST;

    ll n;
    cin >> n;
    ll ar[n];

    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        order[x] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end(), cmp);
    }

    bfs(1);

    ll f = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != ans[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
