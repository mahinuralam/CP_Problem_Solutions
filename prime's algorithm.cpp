#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll MXSZ = 1e6 + 7;

int parent[MXSZ];
int key[MXSZ];
bool mstSet[MXSZ];
vector<pair<ll, ll>> adj[MXSZ];
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

void prims(ll node)
{
    key[0] = 0;
    parent[0] = -1;
    pq.push({0, 0});

    for (int i = 0; i < n - 1; i++)
    {
        ll u = pq.top().second;
        pq.pop();

        mstSet[u] = true;

        for (auto child : adj[node])
        {
            ll v = child.first;
            ll w = child.second;

            if (mstSet[v] == false && w < key[v])
            {
                parent[v] = u;
                pq.push({key[v], v});
                key[v] = w;
            }
        }
    }
}

void init(ll n)
{
    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        mstSet = false;
    }
}

int main()
{
    FAST;

    ll n;
    cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        ll u,v,w;
        cin >> u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    init(n);

    prims(1);

    return 0;
}
