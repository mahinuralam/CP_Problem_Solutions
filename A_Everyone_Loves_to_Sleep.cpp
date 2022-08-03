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
        ll n, h, m;
        cin >> n >> h >> m;

        vector<pair<ll, ll>> v;

        ll sum1, sum2, f = 0;
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;

            ll t1 = 0, t2 = 0;
            if (x >= h)
            {
                t1 = x - h;
            }
            else
            {
                t1 = x + (24 - h);
            }
            // cout << t1 << " bb " << t2 << endl;
            if (y >= m)
            {
                t2 = y - m;
            }
            else
            {
                t2 = y + (60 - m);
                if (t1 > 0)
                {
                    t1--;
                }
            }
            // cout << t1 << " asd " << t2 << endl;
            v.push_back({t1, t2});
        }

        sort(v.begin(), v.end());

        sum1 = v[0].first;
        sum2 = v[0].second;

        cout << sum1 << " " << sum2 << endl;
    }

    return 0;
}
