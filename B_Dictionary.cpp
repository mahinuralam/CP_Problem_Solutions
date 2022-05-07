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
        string s;
        cin >> s;

        map<pair<char, char>, ll> mp;

        ll val = 1;
        for (char i = 'a'; i <= 'z'; i++)
        {
            for (char j = 'a'; j <= 'z'; j++)
            {
                if (i == j)
                {
                    continue;
                }
                mp[{i, j}] = val;
                // cout << i << j << " = " << val << endl;
                val++;
            }
        }

        cout << mp[{s[0], s[1]}] << endl;
    }

    return 0;
}