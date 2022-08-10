#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int isPalindrome(string &str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.size() - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    FAST;
    string s;
    cin >> s;
    string str = "AHIMOTUVWXY";
    ll f = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ll ff = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if (s[i] == str[j])
            {
                ff = 1;
            }
        }

        if (ff == 0)
        {
            f = 1;
        }
    }

    if (f == 0 && isPalindrome(s) == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
