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
        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        v.push_back(v[0]);

        ll mx = 0;
        for (int i = 1; i < v.size(); i++)
        {
            ll tt = v[i - 1] + v[i];
            mx = max(tt, mx);
        }
        cout << mx << endl;
    }

    return 0;
}
