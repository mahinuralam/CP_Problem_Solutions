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
        map<ll, ll> mp, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
            mp2[ar[i]]++;
        }

        ll left = 0, right = 0;

        for (int i = 0, j = n - 1, k = 0; i < j; k++)
        {
            if (k % 2 == 0)
            {
                // cout << ar[i] << " i " << mp[ar[i]] << endl;
                if (mp[ar[i]] > 1)
                {
                    left = i + 1;
                    mp[ar[i]]--;
                }
                i++;
            }
            else
            {
                // cout << ar[j] << " j " << mp[ar[j]] << endl;
                if (mp[ar[j]] > 1)
                {
                    right = j + 1;
                    mp[ar[j]]--;
                }
                j--;
            }
        }

        // cout << left << " left right " << right << endl;

        ll x = left;
        ll y = (n - right) + 1;

        if (right == 0)
        {
            y = 0;
        }

        // cout << x << " x y " << y << endl;

        ll ans1 = 0;

        if (x < y)
        {
            ans1 = x + (x + y);
        }
        else
        {
            ans1 = y + (y + x);
        }

        // cout << ans1 << " ans1 " << endl;

        left = 0, right = 0;

        for (int i = 0, j = n - 1, k = 0; i < j; k++)
        {
            if (k % 2 == 1)
            {
                // cout << ar[i] << " i " << mp[ar[i]] << endl;
                if (mp2[ar[i]] > 1)
                {
                    left = i + 1;
                    mp2[ar[i]]--;
                }
                i++;
            }
            else
            {
                // cout << ar[j] << " j " << mp[ar[j]] << endl;
                if (mp2[ar[j]] > 1)
                {
                    right = j + 1;
                    mp2[ar[j]]--;
                }
                j--;
            }
        }

        // cout << left << " left right " << right << endl;

        x = left;
        y = (n - right) + 1;

        if (right == 0)
        {
            y = 0;
        }

        // cout << x << " x y " << y << endl;

        ll ans2 = 0;

        if (x < y)
        {
            ans2 = x + (x + y);
        }
        else
        {
            ans2 = y + (y + x);
        }

        // cout << ans2 << " ans2 " << endl;

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}
