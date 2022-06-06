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
        ll a, b;
        cin >> a >> b;

        ll cnt = 0, f = 0;
        for (int i = a; i <= b; i++)
        {

            ll a1 = i;
            ll a2 = i + 1;
            ll a3 = i + 2;
            ll a4 = i + 3;

            ll val = a1 ^ a2 ^ a3 ^ a4;

            if (val == 0 && a4 <= b)
            {
                f = 1;
                cout << a1 << " " << a2
                     << " " << a3 << " " << a4 << endl;
                // cout << val << endl;
                break;
            }
            else
            {
                cnt++;
                if (cnt > 10)
                {
                    break;
                }
            }
        }
        if (f == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
