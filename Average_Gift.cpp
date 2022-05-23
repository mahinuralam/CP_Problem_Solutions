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
        ll n, x;
        cin >> n >> x;
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        sort(ar, ar + n);
        map<ll, ll> mp;
        ll sm = 0, flag = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sm += ar[i];
            if (sm < x)
            {
                mp[ar[i]]++;
            }
            else
            {
                if ((sm % x) == 0)
                {
                    flag = 1;
                    break;
                }

                ll dif = sm % x;
                if (mp[dif] != 0)
                {
                    sm -= dif;
                    flag = 1;
                    break;
                }
                else
                {
                    // cout << sm << endl;
                    sm -= ar[i];
                }
            }
            // cout << sm << endl;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}