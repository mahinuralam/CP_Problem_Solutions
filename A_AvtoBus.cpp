#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 4 || n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 6 == 0)
            {
                cout << n / 6 << " " << n / 4 << endl;
            }
            else
            {
                cout << n / 6 + 1 << " " << n / 4 << endl;
            }
        }
    }

    return 0;
}
