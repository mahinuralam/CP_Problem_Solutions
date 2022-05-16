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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        char ar[n][m];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> ar[i][j];
            }
        }
        ll flag = 1;
        vector<pair<ll, ll>> vp;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                // cout << ar[i][j];
                if (ar[i][j] == 'R')
                {
                    vp.push_back({i, j});
                }
            }
            // cout << endl;
        }

        for (int i = 0; i < vp.size(); i++)
        {
            for (int j = i + 1; j < vp.size(); j++)
            {
                ll x = vp[i].first - 1;
                ll y = vp[i].second - 1;

                ll xx = vp[j].first - x;
                ll yy = vp[j].second - y;

                if (xx <= 0 || yy <= 0)
                {
                    flag = 0;
                }
            }

            if (flag == 1)
            {
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
