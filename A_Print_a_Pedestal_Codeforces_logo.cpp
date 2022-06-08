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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll a, b, c, bb;

        b = (n - 3) / 3;

        c = n - b;

        if (c % 2 == 0)
        {
            a = (c + 2) / 2;
            bb = n - (a + b);
        }
        else
        {
            a = (c + 1) / 2;
            bb = (c - 1) / 2;
        }

        cout << bb << " " << a << " " << b << endl;
    }

    return 0;
}
