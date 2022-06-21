#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

struct node
{
    ll u, v, w;
    node(ll first, ll second, ll weight)
    {
        u = first;
        v = second;
        w = weight;
    }
};

const ll SZ = 1e6 + 5;
const ll INF = 1e7;

vector<node> adj;
ll dist[SZ];

void bellmanFord(ll n)
{
    for (int i = 0; i < n; i++)
    {
        for (auto it : adj)
        {
            if (dist[it.u] + it.w < dist[it.v])
            {
                dist[it.v] = dist[it.u] + it.w;
            }
        }
    }
}

int isNegCycle()
{
    for (auto it : adj)
    {
        if (dist[it.u] + it.w < dist[it.v])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    FAST;

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        memset(dist, INF, sizeof(dist));

        for (int i = 0; i < n; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            adj.push_back(node(u, v, w));
        }

        bellmanFord(m);

        for (int i = 0; i < m; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;

        if (isNegCycle() == 1)
        {
            cout << "not possible" << endl;
        }
        else
        {
            cout << "possible" << endl;
        }
    }

    return 0;
}
