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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        map<ll, vector<ll>> mp;

        ll mx = -1;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x].push_back(i);
        }

        for (auto &i : mp)
        {
            sort(i.sec.begin(), i.sec.end());
        }

        for (auto &i : mp)
        {
            ll n = i.sec.size() - 1;
            for (auto &j : mp)
            {
                ll m = j.sec.size() - 1;
                ll val1 = i.fir;
                ll val2 = j.fir;
                if (__gcd(val1, val2) == 1)
                {
                    ll a = i.sec[n];
                    ll b = j.sec[m];
                    mx = max(mx, (a + b + 2));
                }
            }
        }

        cout << mx << endl;
    }

    return 0;
}