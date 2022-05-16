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
        string ss, s;
        cin >> s;
        vector<string> v;
        ll cnt = 0, one = 0, zero = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                one++;
            }
            else if (s[i] == '0' && s[i + 1] == '0')
            {
                zero++;
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                one++;

                if (one % 2 != 0)
                {
                    one--;
                    cnt++;
                    zero++;
                }
            }
            else
            {
                zero++;

                if (zero % 2 != 0)
                {
                    zero--;
                    cnt++;
                    one++;
                }

                // cout << one << " one zero " << zero << " cnt " << cnt << endl;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}