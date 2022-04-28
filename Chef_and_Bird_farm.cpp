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
        ll x, y, z;
        cin >> x >> y >> z;

        if (z % x == 0 && z % y == 0)
        {
            cout << "ANY" << endl;
        }
        else if (z % x == 0)
        {
            cout << "CHICKEN" << endl;
        }
        else if (z % y == 0)
        {
            cout << "DUCK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }

    return 0;
}