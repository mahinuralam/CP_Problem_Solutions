#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        ll sm = 0, ans = 1e18;
        string s1, s2;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sm = 0;
                s1 = v[i];
                s2 = v[j];
                for (int k = 0; k < m; k++)
                {
                    sm += abs(abs(s1[k] - 96) - abs(s2[k] - 96));
                }
                ans = min(sm, ans);
                // cout << s1 << " strings " << s2 << " " << sm << endl;
            }
        }
        cout << ans << endl;
    }

    return 0;
}