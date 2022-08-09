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

    ll n, m, k;
    cin >> n >> m >> k;
    ll ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);
    reverse(ar, ar + n);
    ll sm = 0;
    ll turn = min(n, ((m * k) - (k - 1)));
    for (int i = 0; i < turn; i++)
    {
        // cout << ar[i] << " ";
        sm += ar[i];
    }
    cout << sm << endl;

    return 0;
}
