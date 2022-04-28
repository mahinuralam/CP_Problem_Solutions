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

        vector<ll> v;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.rbegin(), v.rend());

        ll sum = 0, tmp;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                sum += v[i];
                tmp = v[i];
            }
            else
            {
                if (tmp % 2 != 0)
                {
                    if (v[i] % 2 != 0)
                    {
                        continue;
                    }
                    else
                    {
                        sum += v[i];
                        tmp = v[i];
                    }
                }
                else
                {
                    if (v[i] % 2 == 0)
                    {
                        continue;
                    }
                    else
                    {
                        sum += v[i];
                        tmp = v[i];
                    }
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}