#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int f(int n, int turn)
{
    if (n == 0)
    {
        if (turn == true)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    cout << n << " " << turn << endl;

    // if (dp[ind][n] != -1)
    //     return dp[ind][n];

    if (turn == false)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (n >= v[i])
            {
                turn = true;
                return f(n - v[i], turn);
            }
        }
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (n >= v[i])
            {
                turn = false;
                return f(n - v[i], turn);
            }
        }
    }

    // return dp[ind][n] = (take + notTake);
}

int main()
{
    while (cin >> n)
    {
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool turn = true;
        // vector<vector<int>> dp(n, vector<int>(v.size(), -1));

        cout << f(n, turn) << endl;
    }
}
