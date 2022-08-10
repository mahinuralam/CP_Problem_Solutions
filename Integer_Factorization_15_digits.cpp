#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    ll fact = 0;
    while (n % 2 == 0)
    {
        n = n >> 1;
        fact++;
    }

    if (fact != 0)
    {
        cout << "2^" << fact << " ";
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        fact = 0;
        while (n % i == 0)
        {
            fact++;
            n = n / i;
        }
        if (fact > 0)
        {
            cout << i << "^" << fact << " ";
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        cout << n << "^" << 1 << " ";
    }
}

int main()
{
    FAST;
    ll t;
    while (cin >> t && t)
    {
        primeFactors(t);
        cout << endl;
    }

    return 0;
}
