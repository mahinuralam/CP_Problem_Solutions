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
        ll n, x;
        cin >> n >> x;

        ll tt = x * 3;

        ll ans = n / tt;

        cout << ans << endl;
    }

    return 0;
}
