#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int f(int ind, int iq, vector<ll> &v)
{
    if (ind == 0 || iq == 0)
    {
        return 1;
    }

    int notTake = f(ind - 1, iq, v);
    int take = 0;
    if (v[ind] <= iq)
    {
        f(ind - 1, iq, v);
    }
    else
    {
        f(ind - 1, iq - 1, v);
    }
}

int main()
{
    FAST;

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        string ans;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
    }

    return 0;
}
