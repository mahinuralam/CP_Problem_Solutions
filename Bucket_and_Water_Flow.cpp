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
        ll w, x, y, t;
        cin >> w >> x >> y >> t;

        ll total = t * y;

        ll now = w + total;

        if (now == x)
        {

            cout << "filled" << endl;
        }
        else if (now > x)
        {
            cout << "overFlow" << endl;
        }
        else
        {
            cout << "Unfilled" << endl;
        }
    }

    return 0;
}
