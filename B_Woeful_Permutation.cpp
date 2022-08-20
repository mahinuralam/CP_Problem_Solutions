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

        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                ar[i] = i;
            }

            for (int i = 1; i <= n; i += 2)
            {
                swap(ar[i], ar[i + 1]);
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                ar[i] = i;
            }

            for (int i = 2; i <= n; i += 2)
            {
                swap(ar[i], ar[i + 1]);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
