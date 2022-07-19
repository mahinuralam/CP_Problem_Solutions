#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int ind, vector<ll> &v, int need, int hv)
{
    if (need == hv)
    {
        return 1;
    }

    if (ind >= v.size())
    {
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<ll> v;
        for (int i = 1; i < n - 1; i++)
        {
            ll a = ar[i - 1];
            ll b = ar[i];
            ll c = ar[i + 1];

            ll z = max(a, c);
            ll need = 0;
            if (z > b)
            {
                need = z - b + 1;
            }
            v.push_back(need);
        }

        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
        ll need = (n - 2) / 2;
        f(0, v, need, 0);
    }

    return 0;
}