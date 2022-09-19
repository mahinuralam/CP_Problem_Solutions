#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int dp[100][100];

int fun(string s1, string s2, int i, int j)
{
    if (i == 0 || j == 0)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {

        return dp[i][j];
    }

    if (s1[i - 1] == s2[i - 1])
    {
        return dp[i][j] = 1 + fun(s1, s2, i - 1, j - 1);
    }

    return dp[i][j] = max(fun(s1, s2, i - 1, j), fun(s1, s2, i, j - 1));
}

int main()
{
    FAST;
    string s1 = "ashhhhd", s2 = "asd";
    memset(dp, -1, sizeof(dp));
    cout << fun(s1, s2, s1.size(), s2.size()) << endl;

    return 0;
}
