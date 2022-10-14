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
        vector<string> v;

        for (int i = 1; i <= 8; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            // cout << s << endl;
        }

        char ans = 'B';

        for (int i = 0; i < v.size(); i++)
        {
            int cntr = 8;
            // cout << v[i] << endl;
            for (int j = 0; j < v[i].size(); j++)
            {
                // cout << v[i][j];
                if (v[i][j] == 'R')
                {
                    cntr--;
                }
            }
            // cout << endl;
            // cout << cntr << " cnt " << endl;
            if (cntr == 0)
            {
                ans = 'R';
                break;
            }
        }

        if (ans == 'R')
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}