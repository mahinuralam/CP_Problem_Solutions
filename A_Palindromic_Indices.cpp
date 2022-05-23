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
        ll nn;
        string s;
        cin >> nn >> s;

        ll mid = nn / 2;

        if (nn % 2 != 0)
        {
            char s1 = s[mid];
            ll ans = 1;
            for (int i = mid + 1; i < nn; i++)
            {
                if (s1 == s[i])
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            for (int i = mid - 1; i >= 0; i--)
            {
                if (s1 == s[i])
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }

            cout << ans << endl;
        }
        else
        {
            char ss = s[mid - 1];
            char sss = s[mid];
            ll ans = 2;
            for (int i = mid + 1; i < nn; i++)
            {
                if (sss != s[i])
                {

                    break;
                }
                else
                {
                    ans++;
                }
            }
            for (int i = mid - 2; i >= 0; i--)
            {
                if (ss != s[i])
                {

                    break;
                }
                else
                {
                    ans++;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}
