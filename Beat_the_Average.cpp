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
        ll n, x, m;
        cin >> n >> x >> m;
        ll total = n * m;
        ll ans = 0;
        // cout << total << " total " << endl;
        if (x <= m)
        {
            cout << 0 << endl;
            continue;
        }

        ans = total / (m + 1);

        cout << ans << endl;
    }

    return 0;
}