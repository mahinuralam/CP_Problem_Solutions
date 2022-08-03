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
        ll n, m;
        cin >> n >> m;
        string s, ss;
        cin >> s >> ss;
        ll one = 0, zero = 0, one1 = 0, zero1 = 0;

        for (int i = 0, j = 0; i < m, j < n; i++)
        {
            if (s[i] == ss[j])
            {
                j++;
                one++;
            }
        }

        i

            if (one == m)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
