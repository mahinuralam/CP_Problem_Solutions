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
    ll t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = m - ar[i];
            total += mp[val];
            if (val == ar[i])
            {
                total--;
            }
        }
        cout << "Case " << ++cs << ": ";
        cout << total / 2 << endl;
    }

    return 0;
}
