#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                continue;
            }

            if (ar[i] <= (ar[i - 1] + ar[i + 1]))
            {
                continue;
            }

            ans++;
        }

        if (k == 1)
        {
            cout << ceil((n - 2) / 2.0) << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}