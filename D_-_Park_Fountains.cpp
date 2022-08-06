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

    ll n, k;
    cin >> n >> k;
    multiset<ll> q;
    ll ar[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        q.insert(x);
    }

    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ar[i] -= q.size();
        q.erase(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (ar[i] <= 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
