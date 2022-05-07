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

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll ans = 0;
        for (int i = 0; i < 60; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (ar[j] > ar[j + 1])
                {
                    ll val = ar[j];

                    while (val > ar[j + 1])
                    {
                        ans++;
                        val /= 2;
                        // for (int k = 0; k < n; k++)
                        // {
                        //     cout << ar[k] << " ";
                        // }
                        // cout << endl;
                    }
                    ar[j] = val;
                }
                else if (ar[j] == ar[j + 1])
                {
                    ans++;
                    ar[j] /= 2;
                    // for (int k = 0; k < n; k++)
                    // {
                    //     cout << ar[k] << " ";
                    // }
                    // cout << endl;
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ar[i] << " ";
        // }
        // cout << endl;

        ll f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] >= ar[i + 1])
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
