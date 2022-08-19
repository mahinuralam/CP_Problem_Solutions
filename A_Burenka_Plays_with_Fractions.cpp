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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll g1 = __gcd(a, b);
        a /= g1;
        b /= g1;

        ll g2 = __gcd(c, d);
        c /= g2;
        d /= g2;

        if (a == 0)
        {
            if (c != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (c == 0)
        {

            if (a != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {

            a *= d;
            c *= b;

            if (a != c)
            {
                if (a % c == 0 || c % a == 0)
                {
                    cout << 1 << endl;
                }

                else
                {
                    cout << 2 << endl;
                }
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
