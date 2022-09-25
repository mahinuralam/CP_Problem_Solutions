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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> s;
        n = s.size();
        reverse(s.begin(), s.end());
        vector<int> v;
        v.push_back(int(s[0] - '0'));
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i + 1] < s[i])
            {
                // cout << s[i + 1] << " char " << endl;
                // cout << int(s[i + 1]) << " kii " << int('0') << endl;
                int n = s[i + 1] - '0';
                // cout << n << "  asd " << endl;
                v.push_back(n);
            }
            else
            {
                v.pop_back();
                int n = s[i + 1] - '0';
                n = min(n + 1, 9);
                // cout << n << " dsa " << endl;

                v.push_back(n);
                n = s[i] - '0';
                // cout << n << "  das " << endl;

                v.push_back(n);
            }
        }

        sort(v.begin(), v.end());

        for (auto x : v)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}
