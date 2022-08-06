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

    ll n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ll j = i;

            while (s[i] != 'b' && i < n)
            {
                s[i] = 'a';
                i++;
            }

            while (s[j] != 'b' && j >= 0)
            {
                s[j] = 'a';
                j--;
            }
        }
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ans++;
        }
    }

    // cout << s << endl;
    cout << ans << endl;

    return 0;
}
