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
        ll n, l, r;
        cin >> n >> l >> r;
        ll ar[n];
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back(ar[i]);
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > r)
            {
                break;
            }
            ll lo;
            if (v[i] > l)
            {
                lo = 0;
            }
            else
            {
                lo = l - v[i];
            }

            ll up = r - v[i];
            auto it1 = lower_bound(v.begin() + i, v.end(), lo) - v.begin();
            auto it2 = upper_bound(v.begin() + i, v.end(), up) - v.begin();
            // cout << lo << " lo up " << up << endl;
            // cout << v[it1] << " it1 it2 " << v[it2] << endl;
            // cout << it1 << " xxx " << it2 << endl;
            // cout << it2 - it1 << " dif " << endl;

            ans += (it2 - it1);
        }
        cout << ans << endl;
    }

    return 0;
}