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
        ll n, x, y;
        cin >> n >> x >> y;
        ll ar[n];
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            total += ar[i];
        }
        ll now = 0;
        for (int i = 0; i < n; i++)
        {
            ar[i] = max((ar[i] - y), 0LL);
            now += ar[i];
        }

        // cout << total << " " << now + x << endl;

        if (total <= now + x)
        {
            cout << "NO COUPON" << endl;
        }
        else
        {
            cout << "COUPON" << endl;
        }
    }

    return 0;
}
