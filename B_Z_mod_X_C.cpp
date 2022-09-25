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
        ll a, b, c;
        cin >> a >> b >> c;

        ll y = b;
        // cout << y << " YYY" << endl;
        ll x = y * (ceil((c / (b * 1.0)))) + a;
        ll z = x + c;

        cout << x << " " << y << " " << z << " " << endl;
        // cout << (x % y) << " " << (y % z) << " " << (z % x) << endl;
    }

    return 0;
}
