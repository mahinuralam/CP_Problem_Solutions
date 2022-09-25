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

        ll p1 = 500;
        ll p2 = 1000;

        // A->B
        ll los1 = (x * 2);
        ll los2 = (y + x) * 4;

        ll total1 = p1 - los1 + p2 - los2;

        // cout << total1 << endl;

        // B->A

        ll los11 = (x + y) * 2;
        ll los22 = y * 4;

        ll total2 = p1 - los11 + p2 - los22;

        // cout << total2 << endl;

        cout << max(total1, total2) << endl;
    }

    return 0;
}
