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

    ll ar[n];
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = i + 1;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll dif = m - ar[i];
        if (mp[dif] != 0 && mp[dif] != i + 1)
        {
            cnt++;
            break;
        }
    }

    if (cnt == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    cout << "FOUND IT!" << endl;

    return 0;
}
