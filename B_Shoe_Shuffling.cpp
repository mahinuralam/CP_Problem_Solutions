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
        map<ll, ll> mp;
        vector<pair<ll, ll>> vp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            vp.push_back({ar[i], i + 1});
        }
        ll f = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[ar[i]] == 1)
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
        {
            cout << -1 << endl;
            continue;
        }

        sort(vp.begin(), vp.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << vp[i].first << " " << vp[i].second << endl;
        // }

        // cout << "DONE" << endl;

        for (int i = 0; i < n - 1; i++)
        {
            ll x = vp[i].first;
            ll y = vp[i + 1].first;

            if (x == y)
            {
                while (x == y && i < n - 1)
                {

                    // cout << vp[i].second << " inn " << vp[i + 1].second << endl;
                    swap(vp[i].second, vp[i + 1].second);
                    // cout << vp[i].second << " innnn " << vp[i + 1].second << endl;
                    i++;
                    x = vp[i].first;
                    y = vp[i + 1].first;
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << vp[i].first << " " << vp[i].second << endl;
        // }

        for (int i = 0; i < n; i++)
        {
            cout << vp[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
