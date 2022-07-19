#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

ll n;
vector<ll> v = {1, 5, 10, 25, 50};
vector<vector<ll>> dp(5, vector<ll>(30009, -1));

ll f(ll n, ll ind)
{
    if (n == 0 or ind == 0)
    {
        return 1;
    }

    if (dp[ind][n] != -1)
        return dp[ind][n];

    ll take = 0;
    if (n >= v[ind])
    {
        take = f(n - v[ind], ind);
    }

    ll notTake = f(n, ind - 1);

    return dp[ind][n] = (take + notTake);
}

int main()
{
    while (cin >> n)
    {
        ll ax = f(n, 4);
        if (ax != 1)
            cout << "There are " << ax << " ways to produce " << n << " cents change." << endl;
        else
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
    }
}
