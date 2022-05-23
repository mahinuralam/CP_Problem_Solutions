#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ll mn = 1e18;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mn = min(ar[i], mn);
        }
        ll sm = 0;
        for (int i = 0; i < n; i++)
        {
            sm += (ar[i] - mn);
        }
        cout << sm << endl;
    }

    return 0;
}