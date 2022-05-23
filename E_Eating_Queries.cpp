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
        ll n, k;
        cin >> n >> k;
        vector<ll> v, v2;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }

        ll mx = 0;
        mx = v[0];
        for (int i = 1; i < n; i++)
        {
            v[i] += v[i - 1];
            mx = max(v[i], mx);
        }

        // cout << mx << endl;

        for (int i = 0; i < k; i++)
        {
            if (v2[i] > mx)
            {
                cout << -1 << endl;
                continue;
            }
            auto id = lower_bound(v.begin(), v.end(), v2[i]) - v.begin();
            // cout << id << " id val " << v2[i] << endl;
            cout << id + 1 << endl;
        }
    }

    return 0;
}