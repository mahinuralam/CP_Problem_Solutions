#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int ind, int target, vector<int> &ar)
{
    if (ind == 0)
    {
        if (target == ar[0])
        {
            return 1;
        }
        else
        {
            return 1e8;
        }
    }

    int notTake = 0 + f(ind - 1, target, ar);
    int take = 1e8;
    if (ar[ind] <= target)
    {
        take = 1 + f(ind - 1, (target - ar[ind]), ar);
    }

    return min(take, notTake);
}

int main()
{
    int t, tc = 0;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int ans = f(n - 1, target, v);

        cout << "Case " << ++tc << ": ";
        if (ans >= 1e8)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}