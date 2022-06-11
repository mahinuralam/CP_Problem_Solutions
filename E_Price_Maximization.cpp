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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        multiset<ll> mst;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ans += (x / k);
            mst.insert(x % k);
        }

        while (mst.size() >= 2)
        {
            auto r = mst.end();
            r--;
            ll valr = *r;
            ll need = k - valr;
            if (need > valr)
            {
                break;
            }

            auto l = mst.lower_bound(need);

            ll vall = *l;

            ll sm = valr + vall;

            // cout << *r << " t " << *l << endl;

            if (sm >= k && r != l)
            {
                ans++;
                mst.erase(r);
                mst.erase(l);
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
