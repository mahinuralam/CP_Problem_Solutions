#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    
    ll n, m;
    cin >> n >> m;
    while (true)
    {
        if (n > m)
        {
            if (m == 0)
            {
                cout << 1 << " " << n << endl;
                fflush(stdout);
                n = 0;
            }
            else
            {
                cout << 1 << " " << n - m << endl;
                fflush(stdout);
                n = m;
            }
        }
        else
        {
            if (n == 0)
            {
                cout << 2 << " " << m << endl;
                fflush(stdout);
                m = 0;
            }
            else
            {
                cout << 2 << " " << m - n << endl;
                fflush(stdout);
                m = n;
            }
        }
        // cout << n << " my move " << m << endl;
        if (n == 0 && m == 0)
        {
            return 0;
        }

        ll x, y;
        cin >> x >> y;
        if (x == 1)
        {
            n -= y;
        }
        else
        {
            m -= y;
        }
        // cout << n << " his move " << m << endl;
    }

    return 0;
}
