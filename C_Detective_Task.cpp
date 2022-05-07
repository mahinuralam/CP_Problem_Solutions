#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();

        ll one = 0, f = 0, zero = 0, ff = 0, what = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one = i;
                f = 1;
            }
            else if (s[i] == '0' && ff == 0)
            {
                zero = i;
                ff = 1;
            }
        }

        if (f == 0 && ff == 0)
        {
            cout << n << endl;
        }
        else if (f == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else if (ff == 0)
        {
            // cout << "here" << endl;
            cout << n - one << endl;
        }
        else
        {
            if (one < zero)
            {
                // cout << "ene" << endl;
                cout << zero - one + 1 << endl;
            }
            else
            {
                // cout << "ene2" << endl;
                cout << 1 << endl;
            }
        }
    }

    return 0;
}
