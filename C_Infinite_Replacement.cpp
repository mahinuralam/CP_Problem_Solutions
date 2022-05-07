#include <bits/stdc++.h>
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t)
    {

        string s, s2;
        cin >> s >> s2;

        ll n = s.size();
        ll m = s2.size();

        ll a = 0;
        for (int i = 0; i < m; i++)
        {
            if (s2[i] == 'a')
            {
                a++;
            }
        }

        ll ans = 0;
        if (a != 0 && m > 1)
        {
            cout << -1 << endl;
            continue;
        }

        if (a == 1)
        {
            cout << 1 << endl;
            continue;
        }

                cout << ans << endl;
    }

    return 0;
}