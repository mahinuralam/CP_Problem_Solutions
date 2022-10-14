#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
#define sec second
#define fir first
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

        ll ar[n], ar2[n], ans[k];

        vector<pair<ll, ll>> q;

        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < k; i++)
        {
            ll ar2[i];
            cin >> ar2[i];
            q.push_back({ar2[i], i});
        }

        sort(q.begin(), q.end());

            ll total = 0, ind = 0;

        for (int i = 0; i < q.size(); i++)
        {
            ll val = q[i].fir;
            ll index = q[i].sec;

            while (ar[ind] <= val && ind < n)
            {
                total += ar[ind];
                ind++;
            }

            ans[index] = total;
        }

        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
