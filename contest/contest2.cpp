#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
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

        map<ll, ll> mp;
        int f = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (mp[x] == 0)
            {
                mp[x]++;
            }
            else
            {
                f = 1;
            }
        }

        if (f == 1)
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
