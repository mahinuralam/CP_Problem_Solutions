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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        ll f = 0, ff = 0;
        if (a < x)
        {
            x -= a;
            if (x > c)
            {
                f = 1;
            }
            else
            {
                c -= x;
            }
        }

        if (f == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (b < y)
        {
            y -= b;
            if (y > c)
            {
                ff = 1;
            }
            else
            {
                c -= y;
            }
        }

        if (ff == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}