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
        string s;
        cin >> n >> s;
        map<char, ll> mp, mp2;
        ll mod = 1e9 + 7;
        mp['a']++;
        mp['e']++;
        mp['i']++;
        mp['o']++;
        mp['u']++;

        mp2['b'] = 1;
        mp2['c'] = 2;
        mp2['d'] = 1;
        mp2['f'] = 1;
        mp2['g'] = 2;
        mp2['h'] = 1;
        mp2['j'] = 1;
        mp2['k'] = 1;
        mp2['l'] = 2;
        mp2['m'] = 1;
        mp2['n'] = 1;
        mp2['p'] = 1;
        mp2['q'] = 1;
        mp2['r'] = 2;
        mp2['s'] = 1;
        mp2['t'] = 1;
        mp2['v'] = 1;
        mp2['w'] = 1;
        mp2['x'] = 1;
        mp2['y'] = 1;
        mp2['z'] = 1;

        ll total = 1;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] != 0)
            {
                continue;
            }
            else
            {
                total = (total * mp2[s[i]]) % mod;
            }
        }

        cout << total << endl;
    }

    return 0;
}
