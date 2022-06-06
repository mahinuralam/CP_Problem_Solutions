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
        ll n, x;
        cin >> n >> x;

        if (x == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0)
        {
            if (x % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if ((n - x) % 2 != 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else

            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
