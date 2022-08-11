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
        ll a, b, c, m, w;
        cin >> a >> b >> c >> w;
        cin >> m;
        ll ar[m];
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + m);
        reverse(ar, ar + m);
        ll ans = 0;
        c -= w;
        for (int i = 0; i < m; i++)
        {
            if ((c - ar[i]) >= 0)
            {
                c -= ar[i];
                ans++;
            }
            else
            {
                ans++;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
