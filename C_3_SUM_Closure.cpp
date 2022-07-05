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
        ll n;
        cin >> n;
        ll ar[n];
        ll mx = 0;
        ll mn = 1e18;
        map<ll, ll> mp;
        ll pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(ar[i], mx);
            mn = min(ar[i], mn);
            mp[ar[i]]++;
        }

        sort(ar, ar + n);

        ll f = 0;
        for (int i = 0; i < n - 2; i++)
        {
            ll sm = 0;
            for (int j = i; j < 3 + i; j++)
            {
                // cout << ar[j] << " ";
                sm += ar[j];
            }
            // cout << endl;

            if (sm > mx || sm < mn || mp[sm] == 0)
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
