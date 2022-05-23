#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    fast;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        ll other = 0, ones = 0;
        for (auto it = mpp.begin(); it != mpp.end(); it++)
        {
            if (it->second < 2)
            {
                ones++;
            }
            else
            {
                other++;
            }
        }
        ll half;
        if (ones % 2 != 0)
        {
            half = (ones / 2) + 1;
        }
        else
        {
            half = ones / 2;
        }

        cout << half + other << endl;
    }

    return 0;
}
