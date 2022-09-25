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
    ll n, a, b;
    cin >> n >> a >> b;

    cout << n - a << " " << (n - a) - b << endl;

    return 0;
}
