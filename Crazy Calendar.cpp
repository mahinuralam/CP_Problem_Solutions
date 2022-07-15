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
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll xorsum = 0;

        for (int i = 1; i <= n; i++)
        {
            ll total = 0;
            for (int j = 1; j <= m; j++)
            {
                ll x;
                cin >> x;
                total ^= x;
            }

            if (i % 2 == 0)
            {
                continue;
            }

            xorsum ^= total;
        }

        if (xorsum == 0)
        {
            cout << "Case " << ++tc << ": lose" << endl;
        }
        else
        {
            cout << "Case " << ++tc << ": win" << endl;
        }
    }

    return 0;
}
