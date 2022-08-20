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
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll big = 0;

        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        if (ar[0] > ar[1])
        {
            big++;
        }

        if (ar[n - 1] > ar[n - 2])
        {
            big++;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if ((ar[i] >= ar[i - 1] && ar[i] > ar[i + 1]) || (ar[i] >= ar[i - 1] && ar[i] > ar[i + 1]) || (ar[i] > ar[i - 1] && ar[i] > ar[i + 1]))
            {
                // cout << ar[i - 1] << ar[i] << ar[i + 1] << endl;
                big++;
            }
        }
        if (big >= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
