#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x, 0});
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        map<ll, ll> mp;
        if (v[i].second == 0)
        {
            for (int j = 0; j < n; j++)
            {
                ll x = v[j].first;

                if (mp[x] == 0 && v[j].second == 0)
                {
                    mp[x]++;
                    v[j].second = 1;
                }
            }
        }
        if (mp.size() != 0)
        {
            ans++;
        }
        mp.clear();
    }

    cout << ans << endl;

    return 0;
}
