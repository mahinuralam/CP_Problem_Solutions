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
        ll x, a, y, b;
        cin >> x >> a >> y >> b;

        if ((x == 1 && a == 0) && (y == 1 && b == 0))
        {
            cout << "Yes" << endl;
        }
        else if (a * log(x) == b * log(y))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
