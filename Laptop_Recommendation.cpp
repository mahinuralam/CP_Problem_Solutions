#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        ll mx = 0, ans = 0;
        vector<ll> v;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            v.push_back(it->second);
            if (it->second >= mx)
            {
                mx = it->second;
                ans = it->first;
            }
        }

        sort(v.rbegin(), v.rend());

        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        if (v[0] == v[1] && v.size() > 1)
        {
            cout << "CONFUSED" << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}