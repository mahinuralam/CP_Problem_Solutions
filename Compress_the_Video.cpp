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
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (ar[i] != ar[i - 1])
                {
                    cnt++;
                }
            }
            else if (ar[i] == ar[i + 1])
            {
                ll val = ar[i];
                cnt++;
                while (val == ar[i] && i < n)
                {
                    i++;
                }
                i--;
                // cout << ar[i] << " ar[i] i " << i << endl;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
