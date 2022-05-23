#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
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
        map<ll, ll> mp;
        ll same = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[ar[i]] != 0)
            {
                same++;
            }
            mp[ar[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 0)
            {
                zero++;
            }
        }

        if (zero != 0)
        {
            cout << n - zero << endl;
        }
        else if (same != 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n + 1 << endl;
        }
    }

    return 0;
}