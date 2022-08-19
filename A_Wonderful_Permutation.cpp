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
        ll n, m;
        cin >> n >> m;

        vector<pair<ll, ll>> vp;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            vp.push_back({x, i});
        }

        sort(vp.begin(), vp.end());

        ll ans = 0;

        for (int i = 0; i < m; i++)
        {
            if (vp[i].second > m)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
