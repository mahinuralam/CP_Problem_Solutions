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

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << 1 << endl;
        }
        else if (n == 4)
        {
            cout << 1 << endl;
        }
        else
        {
            n--;
            if (n % 5 == 0)
            {
                cout << (n / 5) * 2 << endl;
            }
            else
            {
                ll hv = n % 5;

                if (hv <= 3)
                {
                    cout << (n / 5) * 2 + 1 << endl;
                }
                else
                {
                    cout << (n / 5) * 2 + 2 << endl;
                }
            }
        }
    }

    return 0;
}
