#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar1[n], ar2[n];
        map<pair<ll, ll>, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += mp[{ar1[i], ar2[i]}];
            mp[{ar2[i], ar1[i]}]++;
        }

        cout << ans << endl;
    }

    return 0;
}