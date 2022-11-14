#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int one = 0, zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            if (s[i] == '1')
            {
                char ch = s[i];
                int j = i;
                int cnt = 0;
                while (ch == '1')
                {
                    cout << "DHUKE" << endl;
                    ch = s[j];
                    j++;
                    cnt++;
                    i++;
                }
                cout << cnt << " 1 " << s[j] << endl;
            }
            else
            {
                char ch = s[i];
                int j = i;
                int cnt = 0;
                while (ch == '0')
                {
                    ch = s[j];
                    j++;
                    cnt++;
                    i++;
                }
                cout << cnt << " 0 " << s[j] << endl;
            }
        }
    }

    return 0;
}
