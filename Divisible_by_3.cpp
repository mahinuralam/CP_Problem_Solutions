#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, i, cnt = 0;
        cin >> a >> b;

        for (i = 0;; i++)
        {
            if (a % 3 == 0 || b % 3 == 0)
            {
                break;
            }

            a = a - b;
            cnt++;

            if (a % 3 == 0 || b % 3 == 0)
            {
                break;
            }

            b = a - b;
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
