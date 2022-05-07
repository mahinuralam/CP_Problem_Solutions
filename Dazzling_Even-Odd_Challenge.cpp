#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        ll flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (mp[ar[i]] == 1)
            {
                flag = 1;
            }
            mp[ar[i]] = 1;
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}