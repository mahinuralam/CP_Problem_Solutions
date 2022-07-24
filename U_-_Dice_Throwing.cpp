#include <bits/stdc++.h>
using namespace std;

#define ul unsigned long long

ul dp[30][200];
ul ar[30];
ul n, m;

void pw()
{
    ar[0] = 6;
    ar[1] = 6;
    for (int i = 2; i < 25; i++)
    {
        ar[i] = ar[i - 1] * 6;
    }
}

ul f(ul ind, ul sum)
{
    if (ind == 0)
    {
        if (sum >= m)
        {
            return 1;
        }

        return 0;
    }

    if (dp[ind][sum] != -1)
        return dp[ind][sum];

    ul take = 0;
    for (int i = 1; i <= 6; i++)
    {
        take += f(ind - 1, sum + i);
    }

    return dp[ind][sum] = take;
}

ul gcd(ul a, ul b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{

    // freopen("out.txt","w",stdout);

    pw();
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }

        memset(dp, -1, sizeof(dp));
        ul total = ar[n];
        ul ans = f(n, 0);
        ul gg = gcd(ans, total);
        if (ans == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            if (ans == total)
            {
                cout << 1 << '\n';
            }
            else
            {

                cout << ans / gg << "/" << total / gg << '\n';
            }
        }
    }
}
