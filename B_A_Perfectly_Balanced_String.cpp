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
        string s;
        cin >> s;
        n = s.size();
        map<char, ll> mp, mpl, mpr, mpm;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        ll flag = 0;
        for (int i = 0; i < n; i++)
        {
            ll mx = 0, mn = 1e18;

            for (int k = i; k < n; k++)
            {
                // cout << mx << " mx mn " << mn << endl;
                mpl[s[k]]++;

                // cout << mx << " " << s[i] << " " << s[k] << " " << mn << " " << endl;
            }

            for (char j = 'a'; j <= 'z'; j++)
            {
                if (mp[j] != 0)
                {
                    cout << mpl[j] << " " << j << endl;
                    mx = max(mx, mpl[j]);
                    mn = min(mn, mpl[j]);
                }
            }

            if (mx - mn > 1)
            {
                flag = 1;
                break;
            }

            mpl.clear();

            if (flag == 1)
            {
                break;
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}