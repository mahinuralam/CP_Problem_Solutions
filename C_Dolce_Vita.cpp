#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

void find(ll l, ll r, ll val)
{
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
        {
            v[i] = v[i - 1] + v[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = k - v[i] + 1;
            ll cnt = ceil(val * 1.0 / (i + 1));
            if (cnt >= 0)
            {
                ans += cnt;
            }
        }
        cout << ans << endl;
    }

    return 0;
}