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
        ll n, m;
        cin >> n >> m;
        char ar[n + 1][m + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> ar[i][j];
            }
        }

        for (int i = n; i >= 1; i--)
        {
            for (int j = m; j >= 1; j--)
            {
                // cout << i << ", " << j << endl;
                char ch = ar[i][j];
                // cout << ch;
                if (ch == '*')
                {
                    // cout << i << " ase " << j << endl;

                    for (int k = i + 1; k <= n; k++)
                    {
                        // cout << k << " ase 2 " << j << endl;

                        char ch = ar[k][j];
                        if (ch == 'o')
                        {
                            ar[k - 1][j] = '*';
                            break;
                        }
                        else if (ch == '.')
                        {
                            ar[k][j] = '*';
                            ar[k - 1][j] = '.';
                        }
                        // cout << ch;
                    }
                }
            }
            // cout << endl;
        }
        // cout << endl;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << ar[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}