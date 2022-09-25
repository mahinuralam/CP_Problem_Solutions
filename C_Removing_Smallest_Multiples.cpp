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
        string s;
        cin >> s;
        int len = s.size();
        int ans[11];
        memset(ans, 0, sizeof(ans));
        for (int i = len - 1; i > 0; i--)
        {
            int cur = s[i] - '0';
            int prev = s[i - 1] - '0';
            if (prev > cur)
            {
                ans[prev + 1]++;
                swap(s[i], s[i - 1]);
                s[i] = 'a';
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (s[i] != 'a')
            {
                int cur = s[i] - '0';
                ans[cur]++;
            }
        }
        string result = "";
        for (int i = 0; i < 10; i++)
        {
            char c = i + '0';
            for (int j = 0; j < ans[i]; j++)
            {
                result.push_back(c);
            }
        }
        for (int i = 0; i < ans[10]; i++)
        {
            result.push_back('9');
        }
        cout << result << endl;
    }

    return 0;
}
