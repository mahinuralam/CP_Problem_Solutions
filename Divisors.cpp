#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

ll divSum(ll n)
{
    ll sum = -n;
    cout << sum << endl;
    for (ll i = 1; i <= sqrt(n) + 1; i++)
    {
        if (i * i == n)
        {
            cout << i * i << " divisors " << endl;
            sum += i;
        }
        else if (n % i == 0)
        {
            cout << i << " " << n / i << " divisor " << endl;
            sum += i;
            sum += (n / i);
        }
    }
    return sum;
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        cout << divSum(x) << " " << divSum(y) << endl;

        if (divSum(x) != y || divSum(y) != x)
        {
            cout << "Friendship is not ideal" << endl;
        }
        else
        {
            cout << "Friendship is ideal" << endl;
        }
    }

    return 0;
}
