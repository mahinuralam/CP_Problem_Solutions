#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << -1 << endl;
    }
    else if (x == 0 and y == 0)
    {
        cout << -1 << endl;
    }
    else if ((n - 1) % max(x, y) == 0)
    {
        /// print
        int _max = max(x, y);
        int _max_print = _max;
        //        cout << "max_print = " << _max_print << endl;
        int cnt = 0;
        int cur_print = 1;
        for (int i = 1; i < n; i++)
        {
            cout << cur_print << " ";
            cnt++;
            if (cnt == _max_print)
            {
                cnt = 0;
                cur_print = i + 2;
            }
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    long long test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}