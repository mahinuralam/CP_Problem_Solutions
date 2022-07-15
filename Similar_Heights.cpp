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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            mx = max(ar[i], mx);
        }

        ll cnt = 0, ans = 0, mxnum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[ar[i]] == 1)
            {
                cnt++;
            }
            mxnum = max(mp[ar[i]], mxnum);
        }

        if (cnt % 2 == 0)
        {
            ans = cnt / 2;
        }
        else
        {
            ans = (cnt / 2) + 1;
            if (mp[mx] == 1)
            {
                if (mxnum == 2)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
