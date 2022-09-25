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
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int bca = abs(b - c) + c - 1;
        int ac = abs(a - 1);
        // cout << bca << " " << ac << endl;
        if (bca == ac)
        {
            cout << 3 << endl;
        }
        else if (bca > ac)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
