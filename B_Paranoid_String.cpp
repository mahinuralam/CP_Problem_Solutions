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
        cin >> n;
        string s;
        cin >> s;
        ll ans = n;
        // 1 to 0
        string ss = s;
        reverse(ss.begin(), ss.end());
        ll cnt1 = 0;
        for (int i = 1; i < n; i++)
        {
            if (ss[i - 1] == '1' && ss[i] == '0')
            {
                char ch = ss[i];
                while (ch == '0' && i < n)
                {
                    cnt1++;
                    i++;
                    ch = ss[i];
                }
            }
        }

        // cout << cnt1 << endl;

        ll cnt2 = 0;
        for (int i = 1; i < n; i++)
        {
            if (ss[i - 1] == '0' && ss[i] == '1')
            {
                char ch = ss[i];
                while (ch == '1' && i < n)
                {
                    cnt2++;
                    i++;
                    ch = ss[i];
                }
            }
        }

        // cout << cnt2 << endl;


        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        ans = cnt1 + cnt2 + n;

        cout << ans << endl;
    }

    return 0;
}
