#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll MX = 2e5 + 5;
vector<ll> adj[MX], ans[MX];

ll cnt = 0;
void dfs(ll node, ll par)
{
    ans[cnt].push_back(node);
    for (auto child : adj[node])
    {
        if (child != par)
        {
            dfs(child, node);
            cnt++;
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
        ll n;
        cin >> n;
        ll root = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == i + 1)
            {
                root = x;
                continue;
            }
            adj[i + 1].push_back(x);
            adj[x].push_back(i + 1);
        }

        cnt = 0;
        dfs(root, -1);

        ll c = 0;
        for (int i = 0; i <= cnt; i++)
        {
            if (ans[i].size() == 0)
            {
                continue;
            }
            else
            {
                c++;
            }
        }

        cout << c << endl;
        for (int i = 0; i <= cnt; i++)
        {
            if (ans[i].size() == 0)
            {
                continue;
            }
            else
            {
                cout << ans[i].size() << endl;
                for (auto v : ans[i])
                {
                    cout << v << " ";
                }
                cout << endl;
            }
        }
        cout << endl;

        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
            ans[i].clear();
        }
    }

    return 0;
}