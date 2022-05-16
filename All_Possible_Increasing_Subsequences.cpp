#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll sz = 100010;
const ll mod = 1000000007;

ll fre[sz];

void update(ll idx, ll val)
{
    while (idx < sz)
    {
        fre[idx] = (fre[idx] + val) % mod;
        idx += idx & (-idx);
    }
}

ll query(ll idx)
{
    ll ans = 0;

    while (idx > 0)
    {
        ans = (ans + fre[idx]) % mod;
        idx -= idx & (-idx);
    }

    return ans;
}

int main()
{
    FAST;
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(a, a + n);

        memset(fre, 0, sizeof fre);

        map<int, int> m;

        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (m.count(b[i]) == 0)
            {
                m[b[i]] = ++cnt;
            }
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = query(m[a[i]] - 1) + 1;
            ans = (ans + val) % mod;
            update(m[a[i]], ans);
        }

        cout << "Case " << ++tc << ": " << ans << endl;
    }

    return 0;
}
