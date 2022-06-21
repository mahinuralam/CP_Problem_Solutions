#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n];
        ll ttl = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ttl += ar[i];
        }

        if (ttl < k)
        {
            cout << -1 << endl;
            continue;
        }

        // asdasdasdasdasdasd
        // asdasdasdasdasd
        // asdasdasd

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ar[i] << " ";
        // }
        // cout << endl;

        ll mv = 0, l = 1, r = 1, cost = 0, f = 0;

        for (int i = 0, j = n - 1; i < j;)
        {
            if (ttl == k)
            {
                // cout << ttl << " ttl " << endl;
                break;
            }

            while (1)
            {
                if (ar[j] == 1)
                {
                    break;
                }

                j--;
                r++;

                if (j == i)
                {
                    break;
                }
            }

            while (1)
            {
                if (ar[i] == 1)
                {
                    break;
                }

                i++;
                l++;

                if (j == i)
                {
                    break;
                }
            }

            if (i == j)
            {
                l = min(l, r);
            }

            if (l < r)
            {
                i++;
                mv += l;
                // cout << l << " l " << endl;
                l = 1;
                ttl--;
            }
            else
            {
                j--;
                mv += r;
                // cout << r << " r " << endl;
                r = 1;
                ttl--;
            }
        }

        cout << mv << endl;
    }

    return 0;
}
