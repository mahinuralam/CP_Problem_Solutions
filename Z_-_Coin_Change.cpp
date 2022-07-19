#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v = {1, 5, 10, 25, 50};
vector<vector<int>> dp(5, vector<int>(8000, -1));

int f(int n, int ind)
{
    if (n == 0 or ind == 0)
    {
        return 1;
    }

    if (dp[ind][n] != -1)
        return dp[ind][n];

    int take = 0;
    if (n >= v[ind])
    {
        take = f(n - v[ind], ind);
    }

    int notTake = f(n, ind - 1);

    return dp[ind][n] = (take + notTake);
}

int main()
{
    while (cin >> n)
    {
        cout << f(n, 4) << endl;
    }
}
