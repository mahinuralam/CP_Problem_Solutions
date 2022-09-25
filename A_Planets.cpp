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
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        ll cost = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (mp[i] == 0)
            {
                continue;
            }

            ll cost_all = mp[i];
            ll cost_k = k;

            // cout << mp[i] << " " << cost_all << " " << cost_k << endl;

            if (cost_all < cost_k)
            {
                cost += cost_all;
            }
            else
            {
                cost += cost_k;
            }
        }

        cout << cost << endl;
    }

    return 0;
}
