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

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        reverse(ar, ar + n);
        map<ll, ll> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[ar[i]] == 0)
            {
                mp[ar[i]]++;
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << n - cnt << endl;
    }

    return 0;
}
