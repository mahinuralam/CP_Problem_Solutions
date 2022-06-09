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
        ll mx = -1, mn = 1e18, f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ll cnt = 0;
            if (ar[i] >= mx)
            {
                mx = ar[i];
            }
            else
            {
                cnt++;
            }

            if (ar[i] <= mn)
            {
                mn = ar[i];
            }
            else
            {
                cnt++;
            }

            if (cnt == 2)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
