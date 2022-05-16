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
        ll a, b, n;
        cin >> a >> b >> n;

        ll left = abs(b - a);
        ll right = abs(n - left);
        // cout << left << " aa " << right << endl;
        cout << min(left, right) << endl;
    }

    return 0;
}