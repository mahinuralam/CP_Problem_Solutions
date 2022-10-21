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
        cin >> n;
        ll ar[n];
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        cin >> s;
        map<char, ll> mp;
        ll f = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]] == 0)
            {
                mp[s[i]] = ar[i];
            }
            else
            {

                if (mp[s[i]] == ar[i])
                {
                    cout << mp[ar[i]] << " valid " << ar[i] << " " << s[i] << endl;
                    continue;
                }
                else
                {
                    cout << mp[ar[i]] << " " << ar[i] << " " << s[i] << endl;
                    f = 1;
                }
            }
        }

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
