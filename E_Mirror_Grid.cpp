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
        ll n, m;
        cin >> n;
        ll ar[n + 1][n + 1];

        for (int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '0')
                {
                    ar[i][j + 1] = 0;
                }
                else
                {
                    ar[i][j + 1] = 1;
                }
            }
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == (n / 2 + n % 2) && n % 2 != 0)
            {
                continue;
            }

            for (int j = 1; j <= n; j++)
            {

                if (j == (n / 2 + n % 2) && n % 2 != 0)
                {
                    continue;
                }

                ll one = 0, zero = 0;
                ll l = ar[i][j];
                // cout << i << " l " << j << endl;
                ll r = ar[i][(n - j + 1)];
                // cout << i << " r " << (n - j + 1) << endl;
                ll dl = ar[(n - i + 1)][j];
                // cout << (n - i + 1) << " dl " << j << endl;
                ll dr = ar[(n - i + 1)][(n - j + 1)];
                // cout << (n - i + 1) << " dr " << (n - j + 1) << endl;

                if (l == 1)
                    one++;
                else
                    zero++;
                if (r == 1)
                    one++;
                else
                    zero++;
                if (dl == 1)
                    one++;
                else
                    zero++;
                if (dr == 1)
                    one++;
                else
                    zero++;

                if (one < zero)
                {
                    if (l == 1)
                        ar[i][j] = 0;
                    if (r == 1)
                        ar[i][(n - j + 1)] = 0;
                    if (dl == 1)
                        ar[(n - i + 1)][j] = 0;
                    if (dr == 1)
                        ar[(n - i + 1)][(n - j + 1)] = 0;
                    if (i == (n / 2 + n % 2))
                        ans += (one / 2);
                    else
                        ans += one;
                }
                else
                {
                    if (l == 0)
                        ar[i][j] = 1;
                    if (r == 0)
                        ar[i][(n - j + 1)] = 1;
                    if (dl == 0)
                        ar[(n - i + 1)][j] = 1;
                    if (dr == 0)
                        ar[(n - i + 1)][(n - j + 1)] = 1;
                    if (i == (n / 2 + n % 2))
                        ans += (zero / 2);
                    else
                        ans += zero;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
