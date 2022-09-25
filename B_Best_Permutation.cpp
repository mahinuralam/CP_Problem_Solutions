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
        ll ar[n + 5];

        if (n % 2)
        {
            cout << n - 4 << " " << n - 3 << " " << n - 2 << " ";
            for (int i = n - 5; i >= 1; i--)
            {
                cout << i << " ";
            }
            cout << n - 1 << " " << n;
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                ar[i] = i;
            }
            for (int i = 2, j = 1; i <= n - 2, j <= n - 2; i += 2, j += 2)
            {
                cout << ar[i] << " " << ar[j] << " ";
            }
            cout << ar[n - 1] << " " << ar[n];
            cout << endl;
        }
    }

    return 0;
}
