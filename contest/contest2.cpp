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
    ll Case;
    cin >> Case;
    while (Case--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'G' && s2[i] == 'R')
            {
                flag = 1;
            }
            else if (s1[i] == 'R' && s2[i] == 'B')
            {
                flag = 1;
            }
            else if (s1[i] == 'R' && s2[i] == 'G')
            {
                flag = 1;
            }
            else if (s1[i] == 'B' && s2[i] == 'R')
            {
                flag = 1;
            }
        }

        if (flag == 1)
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
