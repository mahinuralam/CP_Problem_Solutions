#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int check(ll mid, ll ar[], ll m, ll n)
{
    ll cnt = 0;
    for (int i = 0; i < m; i++)
    {
        ll val = ar[i];
        ll total = val;
        ll k = 2;
        while (total <= mid)
        {
            total += (val * k);
            cnt++;
            k++;
        }
    }
    // cout << cnt << " parata " << mid << endl;
    if (cnt < n)
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
        ll n;
        cin >> n;

        ll m;
        cin >> m;
        ll ar[m];
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
        }

        ll ans, l = 0, r = 1e8, mid;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (check(mid, ar, m, n) == 1)
            {

                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
