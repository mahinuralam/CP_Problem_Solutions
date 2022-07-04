#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    int t, tc = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one = 0, xorsum;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (i == 0)
            {
                xorsum = x;
            }
            else
            {
                xorsum ^= x;
            }

            if (x == 1)
            {
                one++;
            }
        }

        cout << "Case " << ++tc << ": ";
        if (one == n)
        {
            if (one % 2 == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
            continue;
        }

        // cout << xorsm << endl;

        if (xorsum != 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
