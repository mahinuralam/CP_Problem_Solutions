#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        ll n = s.size();

        ll sm1 = 0, sm2 = 0;
        for (int i = 0; i < n / 2; i++)
        {
            sm1 += (s[i] - '0');
        }

        for (int i = n / 2; i < n; i++)
        {
            sm2 += (s[i] - '0');
        }

        if (sm1 == sm2)
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