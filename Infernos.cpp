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
        ll n, x;
        cin >> n >> x;
        ll ar[n];
        ll mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
            ll val = ceil(ar[i] / (x * 1.0));

            ans += val;
        }
        cout << min(ans, mx) << endl;
    }

    return 0;
}