#include <bits/stdc++.h>
using namespace std;

int solve(string s, int k)
{
    int n = s.size();
    int j = 0, ans = 0;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;

        int mx = 0;
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            mx = max(mp[ch], mx);
        }

        while (((i - j + 1) - mx) > k)
        {
            mp[s[j]]--;
            j++;
        }

        ans = max(ans, (i - j + 1));
    }

    return ans;
}

int main()
{

    string str;
    int k;
    cin >> str >> k;

    cout << solve(str, k) << endl;
}