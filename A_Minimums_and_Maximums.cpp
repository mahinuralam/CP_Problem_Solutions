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
        ll l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if ((l1 <= r2 && l1 >= l2))
        {
            cout << l1 << endl;
        }
        else if ((l2 <= r1 && l2 >= l1))
        {
            cout << l2 << endl;
        }
        else
        {
            cout << l2 + l1 << endl;
        }
    }

    return 0;
}
