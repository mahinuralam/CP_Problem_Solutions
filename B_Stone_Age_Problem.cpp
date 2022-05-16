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
    ll n, q;
    cin >> n >> q;
    ll ar[n + 5];
    ll sm = 0;
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        sm += ar[i];
        mp[i] = 1;
    }

    // cout << sm << " total " << endl;

    ll f = 0, now = 0;

    for (int i = 1; i <= q; i++)
    {
        ll type;
        cin >> type;

        if (type == 1)
        {
            ll ii, x;
            cin >> ii >> x;
            // cout << ii << " " << x << endl;
            if (f == 0 && mp[ii] == 1)
            {

                sm = sm - ar[ii] + x;
                cout << sm << endl;
                ar[ii] = x;
            }
            else
            {
                sm = sm - now + x;
                ar[ii] = x;
                mp[ii] = 1;
                f = 0;
                // cout << now << " " << x << endl;
                cout << sm << endl;
            }
        }
        else
        {
            ll x;
            cin >> x;
            f = 1;
            sm = (x * n);
            cout << sm << endl;
            mp.clear();
            now = x;
        }
    }

    return 0;
}
