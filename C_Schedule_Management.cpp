#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

bool check(ll mid, ll n, map<ll, ll> &mp)
{
    ll help = 0, left = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mid > mp[i])
        {
            help += (mid - mp[i]) / 2;
        }
        else
        {
            left += mp[i] - mid;
        }
    }

    if (help >= left)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[m];
        map<ll, ll> mp;
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        ll ans = 0, l = 1, r = 2 * m;

        while (l <= r)
        {
            ll mid = (l + r) / 2;

            if (check(mid, n, mp))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
