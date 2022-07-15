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
        ll n, m;
        cin >> n >> m;

        map<ll, ll> st, en;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;

            if (st[x] == 0)
            {
                st[x] = i;
                // cout << "start " << x << " " << st[x] << endl;
                en[x] = i;
            }
            else
            {
                en[x] = i;
                // cout << "end " << x << " " << i << endl;
            }
        }

        for (int i = 0; i < m; i++)
        {

            ll x, y;
            cin >> x >> y;

            if (st[x] == 0 || en[y] == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            // cout << st[x] << " start end " << en[y] << endl;
            if (st[x] < en[y])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}