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
        ll pos1 = 0, pos2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
            {
                pos1 = i + 1;
            }
            if (ar[i] == n)
            {
                pos2 = i + 1;
            }
        }

        if (pos1 < pos2)
        {
            cout << pos1 - 1 + (n - pos2) << endl;
        }
        else
        {
            cout << pos1 - 1 + (n - pos2) - 1 << endl;
        }
    }

    return 0;
}
