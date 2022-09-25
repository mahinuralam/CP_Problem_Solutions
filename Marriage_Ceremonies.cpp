#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int n, dp[20][100000], priority[20][20];

bool check(int val, int pos)
{
    return (bool)(val & (1 << pos));
}

int Set(int val, int pos)
{
    return val = val | (1 << pos);
}

int bitmask(int groom, int mask)
{

    if (groom >= n)
        return 0;
    if (dp[groom][mask] != -1)
        return dp[groom][mask];

    int mx = 0;

    for (int i = 0; i < n; i++)
    {

        if (check(mask, i) == 0)
        {
            int takeNow = priority[groom][i];
            int takeNext = bitmask(groom + 1, Set(mask, i));
            int ans = takeNow + takeNext;
            mx = max(mx, ans);
        }
    }

    return dp[groom][mask] = mx;
}

int main()
{
    FAST;
    int t, tc = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> priority[i][j];
            }
        }
        int ans = bitmask(0, 0);
        cout << "Case " << ++tc << ": " << ans << endl;
    }

    return 0;
}
