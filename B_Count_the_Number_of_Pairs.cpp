#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k >> s;
        map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a')
            {
                mp1[s[i]]++;
            }
            else
            {
                mp2[s[i]]++;
            }
        }
        ll ans = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            int mn = min(mp1[char(i)], mp2[char(i - 32)]);
            int mx = max(mp1[char(i)], mp2[char(i - 32)]);
            //cout << char(i) << mn << endl;
            //cout << char(i) << mx << endl;
            mx = mx - mn;
            ans += mn;
            mx = mx / 2;
            if (k >= mx)
            {
                k -= mx;
                ans += mx;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
