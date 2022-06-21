#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ordered_set os;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            os.insert(ar[i]);
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll cnt = os.order_of_key(ar[i]);
            cout << cnt << " find " << endl;
            cout << *(os.find_by_order(cnt)) << endl;
            os.erase(os.find_by_order(cnt));
            ans += os.order_of_key(ar[i] + 1);
        }
        cout << ans << endl;
    }

    return 0;
}
