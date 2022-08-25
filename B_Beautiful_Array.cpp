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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll nk = (n - 1) * (k - 1);
        ll kb = k * b;
        ll can = s - kb;

        ll min_sum = b * k;
        ll max_sum = n * (k - 1) + min_sum;

        if (min_sum > s || s > max_sum)
        {
            cout << -1 << endl;
        }
        else
        {
            // cout << "HOBE" << endl;
            ll val = can;
            ll sz = n - 1;
            while (sz--)
            {
                if (val <= 0)
                {
                    cout << 0 << " ";
                    continue;
                }
                if (val >= k)
                {
                    cout << k - 1 << " ";
                    val -= k - 1;
                }
                else
                {
                    cout << val << " ";
                    val = 0;
                }
            }

            cout << kb << endl;
        }
    }

    return 0;
}
