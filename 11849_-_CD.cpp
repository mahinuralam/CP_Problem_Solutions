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

    while (1)
    {
        ll n, m;
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        ll cnt = 0;
        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            if (mp[x] != 0)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
