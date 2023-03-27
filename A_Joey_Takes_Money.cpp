#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
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
        ll total = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            total *= ar[i];
        }
        ll ans = (total + n - 1) * 2022;
        cout << ans << endl;
    }

    return 0;
}
