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
        ll n, m;
        cin >> n >> m;

        ll ans = 0;

        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n < m)
        {
            ans = ((n - 1) + (m - 1)) + n;
        }
        else
        {
            ans = ((n - 1) + (m - 1)) + m;
        }

        cout << ans << endl;
    }

    return 0;
}
