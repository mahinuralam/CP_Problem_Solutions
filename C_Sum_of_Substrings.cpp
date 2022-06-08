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
        ll n, k;
        string s;
        cin >> n >> k >> s;

        ll l = -1, r = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = i;
                break;
            }
        }

        ll tt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                tt += 11;
            }
        }

        // cout << l << " l r " << r << endl;

        ll left = l, right = n - r - 1;

        // cout << left << " aa " << right << endl;

        // cout << tt << " tt after " << endl;

        if (l == -1)
        {
            cout << 0 << endl;
        }
        else if (l == r)
        {
            if (k >= right)
            {
                tt -= 10;
                cout << tt << endl;
            }
            else if (k >= left)
            {
                tt--;
                cout << tt << endl;
            }
            else
            {
                cout << tt << endl;
            }
        }
        else
        {
            if (k >= right)
            {
                tt -= 10;
                k -= right;

                if (k >= left)
                {
                    tt--;
                    cout << tt << endl;
                }
                else
                {
                    cout << tt << endl;
                }
            }
            else if (k >= left)
            {
                tt--;

                if (k >= right)
                {
                    tt -= 10;
                    cout << tt << endl;
                }
                else
                {
                    cout << tt << endl;
                }
            }
            else
            {
                cout << tt << endl;
            }
        }
    }

    return 0;
}
