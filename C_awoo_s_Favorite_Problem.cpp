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
        ll n;
        cin >> n;
        string s, ss;
        cin >> s >> ss;

        if (s == ss)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == ss[i])
            {
                continue;
            }

            if (s[i] + 1 != ss[i])
            {
                break;
            }

            ll j = i + 1;

            while (s[i] == s[j])
            {
                j++;
            }

            if (s[j] != ss[i])
            {
                break;
            }

            s[i]++;
            s[j]--;
        }

        if (s == ss)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
