#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool f(int ind, int target, vector<int> &ar)
{
    if (ind == 0)
    {
        if (target == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    cout << target << endl;

    int notTake = f(ind - 1, (target - ar[ind]), ar);

    cout << target << endl;

    int take = f(ind - 1, (target + ar[ind]), ar);

    cout << target << endl;

    return take | notTake;
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

        if (ans == 0)
        {
            cout << "Not divisible" << endl;
        }
        else
        {
            cout << "Divisible" << endl;
        }
    }

    return 0;
}