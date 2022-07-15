#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

void fun(ll n, ll dp[])
{
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main()
{
    FAST;

    ll n;
    cin >> n;
    ll dp[n + 1];
    memset(dp, -1, sizeof(dp));

    fun(n, dp);

    cout << dp[5] << endl;

    return 0;
}
