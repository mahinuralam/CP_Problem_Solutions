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
        ll n;
        cin >> n;

        if (n < 5)
        {
            cout << n << endl;
        }
        else
        {
            ll gift = n / 5;

            cout << n - gift << endl;
        }
    }

    return 0;
}