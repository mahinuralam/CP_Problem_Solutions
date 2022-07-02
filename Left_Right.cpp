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
        ll n;
        cin >> n;
        vector<ll> v, a, b;

        for (int i = 0; i < 2 * n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                a.push_back(x);
            }
            else
            {
                b.push_back(x);
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " << b[i] << endl;
        // }

        for (int i = 0; i < n; i++)
        {
            v.push_back(abs(a[i] - b[i]) - 1);
        }

        ll xorsm = v[0];
        for (int i = 1; i < n; i++)
        {
            xorsm ^= v[i];
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
