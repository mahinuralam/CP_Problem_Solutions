#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll n;
    cin >> n;
    map<ll, ll> mp;
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back({x, y});
        mp[x]++;
        mp[y]++;
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll x = vp[i].first;
        ll y = vp[i].second;
        // cout << mp[x] << " asd " << mp[y] << endl;
        if ((mp[x] == 2 && mp[y] == 1 && x != 1 && y != 1) || (mp[x] == 1 && mp[y] == 2 && y != 1 && y != 1))
        {
            // cout << "PAISI" << endl;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
