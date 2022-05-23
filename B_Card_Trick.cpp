#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    fast;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll nn;
        cin >> nn;
        ll arr[nn];

        for (int i = 0; i < nn; i++)
        {
            cin >> arr[i];
        }

        ll m;
        cin >> m;
        ll total = 0;
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            total += x;
        }

        cout << arr[total % nn] << endl;
    }

    return 0;
}
