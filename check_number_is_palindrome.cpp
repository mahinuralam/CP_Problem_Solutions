#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
using namespace std;

ll rev(ll n)
{
    ll revNum = 0;
    while (n > 0)
    {
        int dig = n % 10;
        revNum = revNum * 10 + dig;
        cout << revNum << endl;
        n /= 10;
    }

    return revNum;
}

int main()
{
    FAST;
    ll n;
    cin >> n;

    ll rev_of_n = rev(n);

    if (rev_of_n == n)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
