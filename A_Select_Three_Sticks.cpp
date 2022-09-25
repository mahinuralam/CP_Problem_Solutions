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
        ll n;
        cin >> n;
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        ll ans = 1e18;
        for (int i = 2; i < n; i++)
        {
            ll x = ar[i - 2], y = ar[i - 1], z = ar[i];

            ll dif = abs(x - y) + abs(y - z);

            ans = min(dif, ans);
        }

        cout << ans << endl;
    }

    return 0;
}
