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
        ll n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n < 7)
        {
            cout << "NO" << endl;
        }
        else
        {
            n -= 7;
            if (n % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
