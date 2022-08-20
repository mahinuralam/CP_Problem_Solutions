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
        ll ans = 0;
        vector<pair<ll, ll>> vp;
        vp.push_back({0, 0});
        for (int i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        sort(vp.begin(), vp.end());

        for (int i = 1; i < n; i++)
        {
            ll x1 = vp[i - 1].first;
            ll y1 = vp[i - 1].second;

            ll x2 = vp[i].first;
            ll y2 = vp[i].second;

            ans += abs(x1 - x2) * 2 + abs(y1 - y2) * 2;
        }
        cout << ans << endl;
    }

    return 0;
}
