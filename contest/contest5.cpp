#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

string s, s1;
int mx = 1e8;
map<string, int> mp;

int f(int pos, string &s1)
{
    string s2;
    s2 = s1;
    // cout << pos << " pos " << endl;
    if (pos >= 11)
    {
        // cout << pos << " pos 11 " << endl;

        // cout << s1 << endl;

        int ans = 0;
        for (int i = 0; i < 12; i++)
        {
            if (s1[i] == '1')
            {
                ans++;
            }
        }
        mx = min(ans, mx);
        return mx;
    }

    if (mp[s1])
        return mp[s1];

    int l = 0, r = 1, k = 2;
    while (k <= 11)
    {
        if (s1[l] == '0' && s1[r] == '1' && s1[k] == '1')
        {
            // cout << s1[l] << " if " << s1[r] << " " << s1[k] << endl;
            s1[l] = '1';
            s1[r] = '0';
            s1[k] = '0';
            mp[s1] = f(pos + 1, s1);
            s1 = s2;
        }
        else if (s1[l] == '1' && s1[r] == '1' && s1[k] == '0')
        {
            // cout << s1[l] << " else " << s1[r] << " " << s1[k] << endl;
            s1[l] = '0';
            s1[r] = '0';
            s1[k] = '1';
            mp[s1] = f(pos + 1, s1);
            s1 = s2;
        }

        l++, r++, k++;
    }

    return mp[s1] = f(pos + 1, s1);
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                s1 += '0';
            }
            else
            {
                s1 += '1';
            }
        }

        // cout << s1 << endl;
        mx = 1e8;
        f(0, s1);

        cout << mx << endl;
        s1.clear();
        s.clear();
        mp.clear();
    }

    return 0;
}
