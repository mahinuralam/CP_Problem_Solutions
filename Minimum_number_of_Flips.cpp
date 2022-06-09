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
        ll neg = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 1)
            {
                one++;
            }
            else
            {
                neg++;
            }
        }

        ll now = abs(one - neg);

        if (now % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << now / 2 << endl;
        }
    }

    return 0;
}
