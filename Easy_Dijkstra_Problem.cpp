#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll lx = 1e5 + 5;

vector<int> v[lx];
vector<int> cost[lx];
int dis[lx];
int vis[lx];

void dijkstra(int source, int n)
{
    for (int i = 0; i <= n + 2; i++)
    {
        dis[i] = INT_MAX;
    }

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    dis[source] = 0;

    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        ll dist = pq.top().first;
        ll prev = pq.top().second;
        pq.pop();

        if (dis[prev] < dist)
            continue;

        for (int i = 0; i < v[prev].size(); i++)
        {
            ll x = v[prev][i];
            ll c = cost[prev][i];

            if (dis[x] > dis[prev] + c)
            {
                dis[x] = dis[prev] + c;
                pq.push(make_pair(dis[x], x));
            }
        }
    }
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        for (int i = 0; i <= n + 2; i++)
        {
            v[i].clear();
            cost[i].clear();
            vis[i] = 0;
        }

        for (int i = 0; i < q; i++)
        {
            ll x, y, z;
            cin >> x >> y >> z;

            v[x].push_back(y);

            cost[x].push_back(z);
        }

        ll x, y;
        cin >> x >> y;

        dijkstra(x, n);

        // cout << "here" << endl;

        if (dis[y] == INT_MAX)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << dis[y] << endl;
        }
    }
    return 0;
}