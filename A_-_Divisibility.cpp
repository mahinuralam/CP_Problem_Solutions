#include <bits/stdc++.h>
using namespace std;

bool f(int ind, int target, int sum, vector<int> &v, vector<vector<int>> &dp)
{
    if (ind == v.size())
    {
        // cout << sum << endl;
        if (sum == 0)
            return 1;
        else
            return 0;
    }

    if (dp[ind][sum] != -1)
        return dp[ind][sum];

    bool take = f(ind + 1, target, ((sum + v[ind]) % target + target) % target, v, dp);
    bool notTake = f(ind + 1, target, ((sum - v[ind]) % target + target) % target, v, dp);

    return dp[ind][sum] = take | notTake;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;

        long int sum = 0, sz = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        vector<vector<int>> dp(10005, vector<int>(105, -1));

        sum = (v[0] + k) % k;

        if (f(1, k, sum, v, dp) == 1)
            cout << "Divisible" << endl;
        else
            cout << "Not divisible" << endl;
    }
}
