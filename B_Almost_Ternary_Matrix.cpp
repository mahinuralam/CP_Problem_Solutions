#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[n + 5][m + 5];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                ar[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; i++)
        {

            for (int j = 1; j <= m; j++)
            {
                ll mid = ar[i][j];

                ll top = ar[i - 1][j];
                ll down = ar[i + 1][j];
                ll right = ar[i][j + 1];
                ll left = ar[i][j - 1];

                ll zero = 0, one = 0;

                if (i - 1 >= 1)
                {
                    if (top == 0)
                    {
                        zero++;
                    }
                    else
                    {
                        one++;
                    }
                }

                if (i + 1 <= n)
                {
                    if (down == 0)
                    {
                        zero++;
                    }
                    else
                    {
                        one++;
                    }
                }

                if (j + 1 <= m)
                {
                    if (right == 0)
                    {
                        zero++;
                    }
                    else
                    {
                        one++;
                    }
                }

                if (j - 1 >= 1)
                {
                    if (left == 0)
                    {
                        zero++;
                    }
                    else
                    {
                        one++;
                    }
                }

                if (zero > 2)
                {
                    ar[i + 1][j] = 1;
                }
                else if (one > 2)
                {
                    ar[i + 1][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << ar[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
