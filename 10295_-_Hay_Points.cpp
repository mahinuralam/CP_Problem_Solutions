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

    ll n, m;
    cin >> n >> m;
    map<string, ll> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        ll x;
        cin >> s >> x;
        mp[s] = x;
    }

    ll total = 0;
    while (m != 0)
    {
        string s, cma, tmp;

        while (cin >> s)
        {
            // cout << s << endl;
            if (s == ".")
            {
                cout << total << endl;
                total = 0;
                m--;
                break;
            }
            total += mp[s];
        }
    }

    return 0;
}
