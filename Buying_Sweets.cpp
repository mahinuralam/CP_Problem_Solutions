#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        ll ar[n], ar2[n];
        vector<pair<ll, pair<ll, ll>>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }

        for (int i = 0; i < n; i++)
        {
            ll dif = ar[i] - ar2[i];
            v.push_back({dif, {ar[i], ar2[i]}});
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {

            ll x = v[i].first, y = v[i].second.first, z = v[i].second.second;
            if (y <= r)
            {
                // cout << y << " y r " << r << endl;
                // cout << v[i].first << " outer " << v[i].second.first << " inner " << v[i].second.second << endl;
                if (x == 1)
                {
                    ans += r - z;
                    r = y;
                }
                else
                {
                    ll cal = (r - z) / x;
                    ans += cal;
                    r = r - (cal * x);
                }
                // cout << ans << " ans "
                //      << " r " << r << endl;
            }
        }

        // cout << ans << " ans " << endl;
        cout << ans << endl;
    }

    return 0;
}