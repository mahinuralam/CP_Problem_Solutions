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
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        string ans;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                // cout << s[i] << " " << s[i + 1] << " " << s[i + 2] << endl;
                // cout << " val 11  " << int(s[i + 1]) - 48 << endl;
                // cout << "val 222 " << (int(s[i + 2]) - 48) * 10 << endl;
                int val = int(s[i + 1]) - 48 + (int(s[i + 2]) - 48) * 10;
                char ch = 'a' + val - 1;
                ans += ch;
                i += 2;
            }
            else
            {
                char ch = 'a' + (int(s[i]) - 49);
                ans += ch;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
