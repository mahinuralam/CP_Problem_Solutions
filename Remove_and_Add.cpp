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
        map<ll, ll> mp;
        deque<ll> dq;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            dq.push_back(ar[i]);
        }

        vector<pair<ll, ll>> vp;
        for (int i = 0, j = n - 1, k = 0; k < n; k++)
        {

            if (k % 2 == 0)
            {
                if (mp[ar[i]] > 1)
                {
                    vp.push_back({ar[i], (i + 1)});
                    mp[ar[i]]--;
                }
                i++;
            }
            else
            {
                if (mp[ar[j]] > 1)
                {
                    vp.push_back({ar[j], (j + 1)});
                    mp[ar[j]]--;
                }
                j--;
            }
        }

        for (int i = 0; i < vp.size(); i++)
        {
            cout << vp[i].first << " " << vp[i].second << endl;
        }

        while (!dq.empty())
        {
            ll x = dq.front();
            ll y = dq.back();

            cout << y << " ";
            dq.pop_back();
        }
    }

    return 0;
}
