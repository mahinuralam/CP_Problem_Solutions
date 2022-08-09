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
    ll cnt = 0;
    map<char, ll> mp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c')
        {
            mp['c']++;
        }
        else if (s[i] == 'o')
        {
            mp['o']++;
        }
        else if (s[i] == 'd')
        {
            mp['d']++;
        }
        else if (s[i] == 'e')
        {
            mp['e']++;
        }
        else if (s[i] == 'r')
        {
            mp['r']++;
        }
        else if (s[i] == 'a')
        {
            mp['a']++;
        }
        else if (s[i] == 'm')
        {
            mp['m']++;
        }
        else if (s[i] == 's')
        {
            mp['s']++;
        }
    }

    ll mn = 1e8;
    string ss = "coderams";
    for (int i = 0; i < ss.size(); i++)
    {
        mn = min(mp[ss[i]], mn);
    }

    cout << mn << endl;

    return 0;
}
