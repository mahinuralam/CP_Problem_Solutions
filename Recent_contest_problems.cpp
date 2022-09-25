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

        ll cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s == "START38")
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }

        cout << cnt1 << " " << cnt2 << endl;
    }

    return 0;
}
