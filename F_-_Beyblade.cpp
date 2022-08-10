#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int dp[10][10];

void fun(int n)
{
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][i - 1];
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
        }
    }
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    fun(10);
    while (t--)
    {
        ll n;
        cin >> n;
        cout << dp[n][0] << endl;
    }

    return 0;
}
