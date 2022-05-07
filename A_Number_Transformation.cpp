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
        ll x, y;
        cin >> x >> y;

        if (y % x != 0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else if (x > y)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll p = y / x;
            cout << 1 << " " << p << endl;
        }
    }

    return 0;
}