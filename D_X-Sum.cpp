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
        cin >> n >> m;
        ll ar[n + 5][m + 5];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> ar[i][j];
            }
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                ll sm1 = 0;
                ll sm2 = 0;
                ll sm3 = 0;
                ll sm4 = 0;
                // left corner down
                for (int k = i + 1, l = j + 1; k <= n && l <= m; k++, l++)
                {
                    sm1 += ar[k][l];
                }
                // cout << sm1 << " left corner down " << ar[i][j] << endl;

                // right corner down
                for (int k = i + 1, l = j - 1; k <= n && l >= 1; k++, l--)
                {
                    sm2 += ar[k][l];
                }
                // cout << sm2 << " right corner down " << ar[i][j] << endl;

                // right corner up
                for (int k = i - 1, l = j - 1; k >= 1 && l >= 1; k--, l--)
                {
                    sm3 += ar[k][l];
                }
                // cout << sm3 << " right corner up " << ar[i][j] << endl;

                // left corner up
                for (int k = i - 1, l = j + 1; k >= 1 && l <= m; k--, l++)
                {
                    sm4 += ar[k][l];
                }
                // cout << sm4 << " left corner up " << ar[i][j] << endl;

                ll total = sm1 + sm2 + sm3 + sm4 + ar[i][j];
                ans = max(ans, total);
            }
        }
        cout << ans << endl;
    }

    return 0;
}