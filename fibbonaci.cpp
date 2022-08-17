#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

ll dp[100];

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int first, second;

    if (dp[n - 1] != -1)
    {
        first = dp[n - 1];
    }
    else
    {
        first = fib(n - 1);
    }

    if (dp[n - 2] != -1)
    {
        second = dp[n - 2];
    }
    else
    {
        second = fib(n - 2);
    }

    return dp[n] = first + second;

    // return fib(n - 1) + fib(n - 2);
}

int main()
{
    FAST;
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fib(n) << endl;

    return 0;
}
