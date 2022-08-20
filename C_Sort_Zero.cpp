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
        vector<pair<ll, ll>> vp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            vp.push_back({ar[i], i + 1});
        }

        sort(vp.begin(), vp.end());

        for (int i = 0; i < n; i++)
        {]
        }
    }

    return 0;
}
