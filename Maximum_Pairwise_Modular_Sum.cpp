#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

#define ma_mod(a, n) ((a % n) + n) % n

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[n];
        map<ll, ll> mp;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            v.push_back(ar[i]);
        }

        sort(v.begin(), v.end());

        ll mx = 0;
        ll val1 = v[n - 1];

        for (int i = 0; i < n; i++)
        {
            ll val2 = v[i];

            ll sm = val1 + val2;

            ll dif = val1 - val2;
            ll dif2 = val2 - val1;

            ll sm2 = ma_mod(dif, m);
            ll sm3 = ma_mod(dif2, m);

            // cout << val1 << " " << val2 << endl;

            // cout << sm << " " << sm2 << " " << sm3 << endl;

            ll sm4 = sm + sm2;
            ll sm5 = sm + sm3;

            ll mx1 = max(mx, sm4);
            ll mx2 = max(mx, sm5);

            mx = max(mx1, mx2);
        }

        cout << mx << endl;
    }

    return 0;
}
