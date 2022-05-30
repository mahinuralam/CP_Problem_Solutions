#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

void solve()
{
    ll n, m, i, j, k, l, q, ans = 0;
    cin >> n;
    ll a[n + 5], pref[n + 5];

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = 0;
    }

    pref[0] = 0;
    vector<ll> v;
    for (i = 2; i <= n; i++)
    {
        v.push_back(a[i] - a[i - 1]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " s ";
    }
    cout << endl;

    for (i = 1; i <= v.size(); i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pref[i] << " ss ";
    }
    cout << endl;

    cin >> q;
    while (q--)
    {
        ll t;
        cin >> t;
        ll pos = lower_bound(v.begin(), v.end(), t) - v.begin();
        if (pos >= v.size())
        {
            cout << pref[n - 1] + t << endl;
        }
        else
        {
            ans = pref[pos];
            l = (n - pos) * t;
            cout << ans + l << endl;
        }
    }
}

int main()
{
    FAST;
    solve();

    return 0;
}
