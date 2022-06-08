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
        string s;
        cin >> s;
        ll cnt = 0, mx = 0;

        for (int j = 0; j < k; j++)
        {
            if (s[j] == 'B')
            {
                cnt++;
            }
        }

        mx = max(mx, cnt);

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
            }
            if (s[i - k] == 'B')
            {
                cnt--;
            }

            mx = max(mx, cnt);
        }

        if (mx >= k)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << k - mx << endl;
        }
    }

    return 0;
}
