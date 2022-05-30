#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    FAST;
    string s;
    cin >> s;

    ll vis[s.size()];
    ll dis[s.size()];

    vector<ll> adj[10];

    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));

    for (int i = 0; i < s.size(); i++)
    {
        adj[s[i] - '0'].push_back(i);
    }

    for (int i = 0; i < 9; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    queue<ll> q;

    vis[0] = 1;
    dis[0] = 0;
    q.push(0);

    while (!q.empty())
    {
        ll idx = q.front();
        q.pop();

        if (idx == s.size() - 1)
        {
            break;
        }

        ll val = s[idx] - '0';

        for (int i = 0; i < adj[val].size(); i++)
        {
            ll node = adj[val][i];

            if (vis[node] == 0)
            {
                vis[node] = 1;
                q.push(node);
                dis[node] += 1;
            }
        }

        adj[val].clear();

        if (idx + 1 >= 0 && idx + 1 < s.size())
        {
            if (vis[idx + 1] == 0)
            {
                vis[idx + 1] = 1;
                dis[idx + 1] += 1;
                q.push(idx + 1);
            }
        }

        if (idx - 1 >= 0 && idx - 1 < s.size())
        {
            if (vis[idx - 1] == 0)
            {
                vis[idx - 1] = 1;
                dis[idx - 1] += 1;
                q.push(idx - 1);
            }
        }
    }

    cout << dis[s.size() - 1] << endl;

    return 0;
}
