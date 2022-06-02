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
        ll pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;

        ll mx1 = max(pa, pb);
        ll mx2 = max(qa, qb);

        if (mx1 == mx2)
        {
            cout << "TIE" << endl;
        }
        else if (mx1 > mx2)
        {
            cout << "Q" << endl;
        }
        else
        {
            cout << "P" << endl;
        }
    }

    return 0;
}
