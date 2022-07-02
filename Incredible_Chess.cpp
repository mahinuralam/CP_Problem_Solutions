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
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n], ar2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }

        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(abs(ar[i] - ar2[i]));
        }

        ll ttl = v[0] - 1;
        for (int i = 1; i < n; i++)
        {
            ttl ^= (v[i] - 1);
        }

        // cout << ttl << endl;

        if (ttl == 0)
        {
            cout << "Case " << ++tc << ": "
                 << "black wins" << endl;
        }
        else
        {
            cout << "Case " << ++tc << ": "
                 << "white wins" << endl;
        }
    }

    return 0;
}
