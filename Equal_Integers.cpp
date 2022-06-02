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
        ll x, y;
        cin >> x >> y;

        ll dif = abs(x - y);

        if (x == y)
        {
            cout << 0 << endl;
        }
        else if (x > y)
        {
            if (dif % 2 == 0)
            {
                cout << dif / 2 << endl;
            }
            else
            {
                cout << (dif / 2) + 2 << endl;
            }
        }
        else
        {
            cout << dif << endl;
        }
    }

    return 0;
}
