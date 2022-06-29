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
        ll n, k;
        cin >> n >> k;
        ll ar[n + 5];

        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n)
            {
                continue;
            }

            ll x = ar[i - 1];
            ll y = ar[i];
            ll z = ar[i + 1];

            if (y <= (x + z))
            {
                continue;
            }

            cnt++;
        }

        if (k == 1)
        {
            cout << ceil((n - 2) / 2.0) << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }

    return 0;
}
