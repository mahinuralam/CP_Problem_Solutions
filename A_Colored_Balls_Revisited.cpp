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
        ll ar[n];
        ll mx = 0, ps1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] > mx)
            {
                mx = ar[i];
                ps1 = i + 1;
            }
        }

        cout << ps1 << endl;
    }

    return 0;
}
