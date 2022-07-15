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
        vector<string> vs;
        ll n;
        cin >> n;
        map<string, ll> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            vs.push_back(s);
            mp[s]++;
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            string s;
            s = vs[i];
            ll sz = s.size();
            ll f = 0;
            for (int j = 0; j < sz; j++)
            {

                string l = s.substr(0, j);
                string r = s.substr(j, sz);
                // cout << l << " " << r << endl;

                if (mp[l] != 0 && mp[r] != 0)
                {
                    f = 1;
                }
            }

            if (f == 1)
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }

        cout << ans << endl;
    }

    return 0;
}
