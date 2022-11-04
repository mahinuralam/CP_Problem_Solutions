#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p = 0, n = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                n += x;
            }
            else
            {
                p += x;
            }
        }

        int ans = abs(abs(p) - abs(n))
                      cout
                  << ans << endl;
    }

    return 0;
}
