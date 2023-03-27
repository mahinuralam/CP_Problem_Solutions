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
        ll n;
        cin >> n;
        string s, ss;
        cin >> s;
        map<char, int> mp;
        mp['m'] = 4;
        mp['e'] = 3;
        mp['o'] = 2;
        mp['w'] = 1;
        int cnt = 0, f = 0, m = 0, e = 0, o = 0, w = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M' or s[i] == 'm')
            {
                ss += 'm';
                if (m == 0)
                {
                    cnt++;
                    m = 1;
                }
            }
            if (s[i] == 'E' or s[i] == 'e')
            {
                ss += 'e';
                if (e == 0)
                {
                    cnt++;
                    e = 1;
                }
            }
            if (s[i] == 'o' or s[i] == 'O')
            {
                ss += 'o';
                if (o == 0)
                {
                    cnt++;
                    o = 1;
                }
            }
            if (s[i] == 'w' or s[i] == 'W')
            {
                ss += 'w';
                if (w == 0)
                {
                    cnt++;
                    w = 1;
                }
            }

            if (s[i] != 'w' and s[i] != 'W' and s[i] != 'o' and s[i] != 'O' and s[i] != 'E' and s[i] != 'e' and s[i] != 'M' and s[i] != 'm')
            {
                // cout << s[i] << endl;
                f = 1;
            }
        }
        if (cnt < 4 || f == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        int mn = mp[ss[0]];
        for (int i = 1; i < ss.size(); i++)
        {
            if (mp[ss[i]] <= mn)
            {
                mn = mp[ss[i]];
            }
            else
            {
                // cout << ss[i] << endl;
                // cout << s[i] << endl;
                f = 1;
                break;
            }
        }
        // cout << s << endl;
        // cout << ss << endl;
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
