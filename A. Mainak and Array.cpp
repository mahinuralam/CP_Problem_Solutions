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
        ll ar[n];

        ll mn = 1e8, mx = -1e8, ps1, ps2;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] > mx)
            {
                mx = ar[i];
                ps1 = i;
            }

            if (ar[i] < mn)
            {
                mn = ar[i];
                ps2 = i;
            }
        }

        // cout << mx << " " << mn << endl;
        // cout << ar[0] << " " << ar[n - 1] << endl;

        ll ans1 = abs(ar[0] - mx);
        ll ans2 = abs(ar[n - 1] - mn);
        ll ans5 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            ans5 = max(ans5, (ar[i] - ar[i + 1]));
        }

        ans5 = max(ans5, ar[n - 1] - ar[0]);

        // cout << ans1 << " " << ans2 << " " << endl;

        cout << max(max(ans1, ans2), ans5) << endl;
    }

    return 0;
}
