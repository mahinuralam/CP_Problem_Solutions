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
        string s;
        cin >> s;
        ll n;
        cin >> n;
        map<char, ll> mp;
        string ss = s, bad, ase;
        sort(ss.rbegin(), ss.rend());
        ll total = 0;

        for (int i = 0; i < s.size(); i++)
        {
            total += s[i] - 'a' + 1;
        }
        // cout << total << " asd sa" << endl;

        if (total <= n)
        {
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {

            ll val = ss[i] - 'a' + 1;

            // cout << val << endl;
            total -= val;

            mp[ss[i]]++;

            if (total <= n)
            {
                // cout << total << " vall " << ss[i] << " " << val << endl;
                break;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] != 0)
            {
                mp[s[i]]--;
            }
            else
            {
                ase += s[i];
            }
        }

        cout << ase << endl;
    }
    return 0;
}
