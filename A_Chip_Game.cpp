#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        n--;
        m--;

        if (n % 2 == 0 && m % 2 == 1)
        {
            cout << "Burenka" << endl;
        }
        else if (n % 2 == 1 && m % 2 == 0)
        {
            cout << "Burenka" << endl;
        }
        else if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "Tonya" << endl;
        }
        else
        {
            cout << "Tonya" << endl;
        }
    }

    return 0;
}
