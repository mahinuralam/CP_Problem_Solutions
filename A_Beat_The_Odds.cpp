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

        ll od = 0, ev = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                ev++;
            }
            else
            {
                od++;
            }
        }

        cout << min(od, ev) << endl;
    }

    return 0;
}
