#include <bits/stdc++.h>
#define DBG(a) cerr << "line " << __LINE__ << " : " << #a << " --> " << (a) << endl
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        DBG(ar);
    }

    return 0;
}
