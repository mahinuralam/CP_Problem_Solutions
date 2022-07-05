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

        ll n, m;
        cin >> n >> m;
        n = n * 100;
        vector<ll> left, right;
        for (int i = 0; i < m; i++)
        {
            ll x;
            string s;
            cin >> x >> s;
            if (s == "left")
            {
                left.push_back(x);
            }
            else
            {
                right.push_back(x);
            }
        }

        // cout << "ASDSDA" << right.size() << endl;

        ll turn = 1;
        for (int i = 0, j = 0;; turn++)
        {
            ll sz = n;
            if (turn % 2 != 0)
            {
                while (i < left.size())
                {
                    ll val = sz - left[i];
                    if (val >= 0)
                    {
                        sz -= left[i];
                    }
                    else
                    {
                        break;
                    }
                    i++;
                }

                // cout << turn << " left " << endl;

                // cout << sz << " szz left " << left[i] << endl;
            }
            else
            {
                // cout << "ASDASDinn" << right[j] << endl;

                while (j < right.size())
                {

                    ll val = sz - right[j];
                    if (val >= 0)
                    {
                        sz -= right[j];
                    }
                    else
                    {
                        break;
                    }
                    j++;
                }

                // cout << turn << " right " << endl;

                // cout << sz << " szz right " << right[j] << endl;
            }

            if (left.size() == 0)
            {

                if (j > right.size() - 1)
                {
                    // cout << i << " i j " << j << endl;
                    break;
                }
            }
            else if (right.size() == 0)
            {
                if (i > left.size() - 1)
                {
                    // cout << i << " i j " << j << endl;
                    break;
                }
            }
            else if (i > left.size() - 1 && j > right.size() - 1)
            {
                // cout << i << " i j " << j << endl;
                break;
            }
        }

        // cout << turn + 1 << endl;

        cout << turn << endl;
    }

    return 0;
}
