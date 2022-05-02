#include <bits/stdc++.h>
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    fast;
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll n;
        string s;
        cin >> s;
        n = s.size();

        if (n == 1)
        {
            ll sm1 = 0, sm2 = 0;
            for (int i = 0; i < n; i++)
            {
                sm1 += (s[i] - 96);
            }
            cout << "Bob " << sm1 << endl;
            continue;
        }

        if (n % 2 != 0)
        {
            ll sm1 = 0, sm2 = 0;
            for (int i = 0; i < n - 1; i++)
            {
                sm1 += (s[i] - 96);
            }
            for (int i = n - 1; i > 0; i--)
            {
                sm2 += (s[i] - 96);
            }
            // cout << sm1 << " " << sm2 << " " << s[n - 1] - 96 << " " << s[0] - 96 << endl;
            if (sm1 > sm2)
            {
                cout << "Alice " << sm1 - (s[n - 1] - 96) << endl;
            }
            else
            {
                cout << "Alice " << sm2 - (s[0] - 96) << endl;
            }
        }
        else
        {
            ll sm1 = 0, sm2 = 0;
            for (int i = 0; i < n; i++)
            {
                sm1 += (s[i] - 96);
            }
            cout << "Alice " << sm1 << endl;
        }
    }

    return 0;
}