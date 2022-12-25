#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        string s, tmp;
        cin >> s;
        tmp = s;
        reverse(tmp.begin(), tmp.end());
        cout << s + tmp << endl;
    }

    return 0;
}
