#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

ll can_win(ll n)
{
    if (n == 1)
    {
        return 0;
    }
    if (can_win(n - 2) == 1 or can_win(n - 3) == 1 or can_win(n - 4) == 1 or can_win(n - 5) == 1 or can_win(n - 6) == 1 or can_win(n - 7) == 1 or can_win(n - 8) == 1 or can_win(n - 9) == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << can_win(n) << endl;
    }

    return 0;
}
