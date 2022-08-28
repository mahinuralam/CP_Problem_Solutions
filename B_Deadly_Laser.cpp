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
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        int right = d + e;
        int down = c + e;

        int up = c - e;
        int left = d - e;

        if ((right >= b && down >= a) ||
            (up <= 1 && left <= 1) ||
            (up <= 1 && down >= a) ||
            (right >= b && left <= 1))
        {
            cout << -1 << endl;
            continue;
        }

        cout << a + b - 2 << endl;
    }

    return 0;
}
