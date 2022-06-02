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
        ll n, k;
        cin >> n >> k;

        if (k % 2 != 0)
        {
            if (k == 1)
            {
                if (n % 2 == 0)
                {
                    cout << "Even" << endl;
                }
                else
                {
                    cout << "Odd" << endl;
                }
            }
            else
            {
                cout << "Even" << endl;
            }
        }
        else
        {
            if (k == 2)
            {
                cout << "Odd" << endl;
            }
            else
            {
                cout << "Even" << endl;
            }
        }
    }

    return 0;
}
