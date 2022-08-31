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
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, ss = "Timur";
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }

        int f = 0;

        for (int i = 0; i < ss.size(); i++)
        {
            if (mp[ss[i]] == 0)
            {
                f = 1;
            }
        }

        if (f == 1 || s.size() != ss.size())
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