#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
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
        ll map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (mp[ar[i]] == 1)
            {
                f = 1;
            }
            mp[ar[i]]++;
        }
        if (f == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(ar, ar + n);

        for (int i = n - 1; i >= 0; i--)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
