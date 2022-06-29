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

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll xx = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                xx ^= ar[j];
            }
            if (xx == ar[i])
            {
                ans = ar[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
