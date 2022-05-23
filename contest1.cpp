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
    fast;
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
            if (mp[ar[i]] == 0)
            {
                v.push_back(ar[i]);
            }
            mp[ar[i]]++;
        }

        sort(v.begin(), v.end());

        if (v.size() == 1)
        {
            ll val1 = v[v.size() - 1];

            ll sm = val1 + val1;
            cout << sm << endl;

            continue;
        }

        ll mx = 0, mx2 = 0, ans = 0;

        ll val1 = v[v.size() - 1];
        ll val2 = v[v.size() - 2];

        ll sm = val1 + val2;

        ll dif = val1 - val2;
        ll dif2 = val2 - val1;

        ll sm2 = ma_mod(dif, m);
        ll sm3 = ma_mod(dif2, m);

        // cout << val1 << " " << val2 << endl;

        // cout << sm << " " << sm2 << " " << sm3 << endl;

        ll sm4 = sm + sm2;
        ll sm5 = sm + sm3;

        mx = max(sm4, sm5);

        // cout << mx << " mxx " << endl;

        if (mp[val1] > 1)
        {
            mx2 = val1 + val1;
        }

        // cout << mx2 << " mx22" << endl;

        ans = max(mx, mx2);

        cout << ans << endl;
    }

    return 0;
}