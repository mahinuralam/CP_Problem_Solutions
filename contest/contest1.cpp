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
    ll Case;
    cin >> Case;
    while (Case--)
    {
        ll n;
        cin >> n;
        string s, s1 = "Timur";
        cin >> s;
        map<char, ll> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        bool f = 0;

        for (int i = 0; i < s1.size(); i++)
        {
            if (mp[s1[i]] == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 1 || s.size() != s1.size())
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