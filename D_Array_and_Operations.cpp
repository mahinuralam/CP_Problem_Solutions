#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;
#define DBG(a) cerr << "line " << __LINE__ << " : " << #a << " --> " << (a) << endl

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            total += x;
        }
        cout << total << " total " << endl;
        sort(v.rbegin(), v.rend());
        map<ll, ll> mp;
        ll pos1 = 0, pos2 = 0, mx = 1e18;
        for (int i = 0, p = 0; i < n, p <= k; i++)
        {

            if (mp[i] != 0)
            {
                continue;
            }

            mx = 1e18;
            cout << total << " total in " << endl;
            cout << v[i] << " last in v[i] " << endl;
            for (int j = i + 1; j < n; j++)
            {
                if (mp[j] != 0)
                {
                    continue;
                }

                ll val = total + (v[i] / v[j]) - v[i] - v[j];

                cout << v[i] << " v[i] v[j] " << v[j] << endl;
                cout << val << " val " << endl;

                if (val < mx)
                {
                    mx = val;
                    pos1 = i;
                    pos2 = j;
                }
            }
            mp[pos1]++;
            mp[pos2]++;

            for (int i = 0; i < n; i++)
            {
                if (mp[i] == 0)
                {
                    cout << i << " not used " << endl;
                }
            }

            total = mx;
            cout << total << " new total " << endl;
            cout << p << " P HOISE EKHON " << endl;

            p++;
        }

        cout << total << endl;
    }

    return 0;
}
