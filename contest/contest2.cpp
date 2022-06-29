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
        ll n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                ans ^= arr[j];
            }
            if (ans == arr[i])
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}