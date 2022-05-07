#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        double ans = 0, sm = 0;
        int cnt = 0, total = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == 1)
            {
                ll val = ar[i];
                sm = 0, cnt = 0;
                while (val == 1 && i < n)
                {
                    sm += val;
                    i++;
                    val = ar[i];
                    cnt++;
                }

                if (i < n && ar[i] != 1)
                {
                    sm += ar[i];
                    cnt++;
                }

                ans += sm / (cnt * 1.0);

                total++;

                cout << i << " i sm " << sm << " cnt " << cnt << " ar[i] " << ar[i] << " ans " << ans << endl;
            }
            else
            {
                ans += ar[i];
                total++;
            }
        }

        cout << ans << endl;

        cout << ans / (total * 1.0) << endl;
    }

    return 0;
}