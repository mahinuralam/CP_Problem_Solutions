#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll n, m;
    while (cin >> n >> m)
    {
        ll same = 0, ans = 0;
        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (y == x)
            {
                same++;
            }
            else if (x > y)
            {
                ans += 3;
            }
            else
            {
                v.push_back((y - x));
            }
        }

        sort(v.begin(), v.end());

        if (same == m)
        {
            ans += same * 3;
            m = 0;
        }
        else if (same > m)
        {
            ans += m * 3;
            same -= m;
            ans += same;
            m = 0;
        }
        else
        {
            ans += same * 3;
            m -= same;
        }

        // cout << ans << " now " << same << endl;

        for (int i = 0; i < v.size(); i++)
        {
            ll need = v[i];

            // cout << x << " " << y << endl;

            if (need + 1 <= m)
            {
                m -= need + 1;
                ans += 3;
            }
            else if (need <= m)
            {
                m -= need;
                ans++;
            }
        }

        // cout << m << " left " << ans << endl;

        cout << ans << endl;
    }

    return 0;
}
