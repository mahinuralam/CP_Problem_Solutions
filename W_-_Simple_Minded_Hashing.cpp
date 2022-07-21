#include <bits/stdc++.h>
using namespace std;

int n, m;

vector<int> v;
// vector<int> tmp;

int f(int len, int sum, int ind, vector<vector<vector<int>>> &dp)
{
    if (ind == 27)
    {
        return 0;
    }

    if (len == n)
    {
        if (sum == m)
        {
            //            cout<<sum<< " ## " << len <<endl;
            //            for(int i = 0; i < tmp.size(); i++){
            //                cout<< tmp[i] << " ";
            //            }
            //            cout<<endl;
            return 1;
        }

        return 0;
    }

    if (dp[len][ind][sum] != -1)
        return dp[len][ind][sum];

    int take = 0;
    // tmp.push_back(v[ind]);
    take = f(len + 1, sum + v[ind], ind + 1, dp);
    // tmp.pop_back();
    int notTake = f(len, sum, ind + 1, dp);

    return dp[len][ind][sum] = (take + notTake);
}

int main()
{
    int tc = 0;
    for (int i = 1; i <= 26; i++)
    {
        v.push_back(i);
    }

    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }

        cout << "Case " << ++tc << ": ";

        if (n > 26 || m > 351)
        {
            cout << "0" << endl;
            continue;
        }

        vector<vector<vector<int>>> dp(27, vector<vector<int>>(27, vector<int>(360, -1)));

        cout << f(0, 0, 0, dp) << endl;
    }
}