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
    ll t, cnt = 0;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        ll pre = -1, idx = 0, p = -1, q = -1, ansl = -1, ansr = -1, mx = -1, f = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= k)
            {
                if (it->first - pre == 1)
                {
                    q++;
                    pre++;
                }
                else
                {
                    p = it->first;
                    q = it->first;
                    pre = it->first;
                }

                if (q - p > mx)
                {
                    mx = p - q;
                    ansl = p;
                    ansr = q;
                }
            }
            else
            {
                pre = -1;
            }
        }

        if (ansl == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ansl << " " << ansr << endl;
        }
    }

    return 0;
}