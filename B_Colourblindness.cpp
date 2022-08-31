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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int f = 0;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'G' && s2[i] == 'R')
            {
                f = 1;
            }
            else if (s1[i] == 'B' && s2[i] == 'R')
            {
                f = 1;
            }
            else if (s1[i] == 'R' && s2[i] == 'G')
            {
                f = 1;
            }
            else if (s1[i] == 'R' && s2[i] == 'B')
            {
                f = 1;
            }
        }

        // cout << s1 << " string " << s2 << endl;

        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
