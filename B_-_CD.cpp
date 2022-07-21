#include <bits/stdc++.h>
using namespace std;

int mx = -1e8;

int f(int ind, int target, int sum, vector<int> &v,
      vector<int> &tmp, vector<vector<int>> &dp, vector<int> &ans)
{
    if (sum >= target)
    {
        // cout<<sum<<" one "<<endl;
        if (sum == target)
        {
            mx = sum;
            ans = tmp;
        }
        else if ((sum - v[ind - 1]) > mx)
        {
            mx = (sum - v[ind - 1]);
            ans = tmp;
            ans.pop_back();
        }

        return 1;
    }

    if (ind == v.size())
    {
        // cout<<sum<<" two "<<endl;
        if (sum > mx)
        {
            mx = sum;
            ans = tmp;
        }

        return 1;
    }

    if (dp[ind][sum] != -1)
        return 1;

    tmp.push_back(v[ind]);
    int take = f(ind + 1, target, sum + v[ind], v, tmp, dp, ans);
    tmp.pop_back();
    int notTake = f(ind + 1, target, sum, v, tmp, dp, ans);

    return dp[ind][sum] = take | notTake;
}

// 1 4 6 1 2 5 6 1 4 1

int main()
{
    int k;
    while (cin >> k)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        vector<vector<int>> dp(n, vector<int>(1e5, -1));
        vector<int> tmp;
        vector<int> ans;
        mx = -1e8;

        f(0, k, 0, v, tmp, dp, ans);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "sum:" << mx << endl;
    }
}
