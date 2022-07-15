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
        cin >> n;
        string s, ss;
        cin >> s;
        ll f = 0;
        ll turn = 0;
        for (int i = 0, j = 0; i < n && j < n; i++)
        {
            if (turn == 0)
            {

                if ((j + ss.size()) < n)
                {
                    string str;
                    str = s.substr(j + 1, j + ss.size());
                    cout << str << endl;
                    if (str == ss)
                    {
                        ss += str;
                    }
                    else
                    {
                        turn = 1;
                        ss += s[j];
                        j++;
                    }
                }
                else
                {
                    turn = 1;
                    ss += s[j];
                    // cout << ss << " " << s[j] << endl;
                    j++;
                }
            }
            else
            {
                turn = 0;
                j += ss.size();
                ss += ss;
                // cout << ss << endl;
            }

            if (ss == s)
            {
                f = 1;
                break;
            }
        }

        if (f == 1)
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
