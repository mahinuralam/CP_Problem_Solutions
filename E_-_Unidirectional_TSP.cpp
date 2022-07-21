#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int n, m;
int ar[100][100];

int f(int i, int j, int sum)
{

    if (i < 1 || j < 1 || i > n || j > m)
    {
        return 0;
    }

    if (j >= m)
    {
        return ar[i][j];
    }

    int mini = 1e8;
    for (int k = -1; k <= +1; k++)
    {
        int value = f(i + k, j + 1, sum + ar[i][j]);
        mini = min(value, mini);
    }

    return mini;
}

int main()
{
    FAST;
    while (cin >> n >> m)
    {

        memset(ar, 0, sizeof(ar));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i <= m; j++)
            {
                cin >> ar[i][j];
            }
        }

        cout << f(1, 1, 0) << endl;
    }

    return 0;
}
