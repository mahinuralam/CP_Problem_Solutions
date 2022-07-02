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
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            ll sm = 0;
            for (int j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                sm += x;
            }
            ar[i] = sm;
        }

        ll xorsm = ar[0];
        for (int i = 1; i < n; i++)
        {
            xorsm ^= ar[i];
        }

        // cout << xorsm << endl;
        cout << "Case " << ++tc << ": ";

        if (xorsm != 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
