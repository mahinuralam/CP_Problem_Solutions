#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n], ar2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll m;
        cin >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        sort(ar2, ar2 + n);
        if (ar[n - 1] > ar2[n - 1])
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else if (ar[n - 1] < ar2[n - 1])
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
    }

    return 0;
}
