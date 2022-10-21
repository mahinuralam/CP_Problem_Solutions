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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n], ar2[n];
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
            vp.push_back({ar2[i], ar[i]});
        }

        if (n == 1)
        {
            cout << ar[0] << endl;
            continue;
        }

        sort(vp.begin(), vp.end());

        ll total = 0;

        for (int i = 0; i < n; i++)
        {
            total += vp[i].second;
            total += vp[i].first * 2;
        }

        cout << total - ar2[0] - ar2[n - 1] - vp[n - 1].second * 2 << endl;
    }

    return 0;
}
