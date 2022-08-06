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

    ll n, k;
    cin >> n >> k;
    ll ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll mx = ar[i];
        ll mn = ar[i];
        for (int j = i + 1; j < n; j++)
        {

            mx = max(ar[j], mx);
            mn = min(ar[j], mn);
            // cout << mx << " ddiff " << mn << endl;
            if (mx - mn == k)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
