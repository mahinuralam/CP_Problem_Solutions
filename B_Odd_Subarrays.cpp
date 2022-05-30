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

        ll inv = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] > ar[i + 1])
            {
                inv++;
                i++;
            }
        }

        cout << inv << endl;
    }

    return 0;
}
