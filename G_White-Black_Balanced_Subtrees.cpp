#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll mx = 2e5 + 5;

vector<ll> v[mx];
vector<ll> b(4010), w(4010);
string s;

void dfs(int node, bool status)
{
    ll total = 0;
    for (int i = 0; i < v[node].size(); i++)
    {
        ll val = v[node][i];
        total += dfs(val, status);
    }

    if (status == true)
    {
        if (s[node - 1] == 'B')
        {
            total++;
        }
        else
        {
            b[node] = total;
            return total;
        }
    }
    else
    {
        if (s[node - 1] == 'W')
        {
            total++;
        }
        else
        {
            w[node] = total;
            return total;
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
        for (int i = 0; i <= n; i++)
        {
            v[i].clear();
        }

        for (int i = 2; i <= n; i++)
        {
            ll x;
            cin >> x;
            v[x].push_back(x);
        }

        cin >> s;

        dfs(1, true);
        dfs(1, false);

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == w[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
