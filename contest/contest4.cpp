#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int calculateMex(unordered_set<int> Set)
{
    int Mex = 0;

    while (Set.find(Mex) != Set.end())
        Mex++;

    return (Mex);
}

int calculateGrundy(int n)
{
    if (n == 0)
        return (0);

    unordered_set<int> Set; // A Hash Table

    for (int i = 0; i <= n / 2; i++)
        Set.insert(calculateGrundy(i));

    return (calculateMex(Set));
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

        ll total;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i == 0)
            {
                cout << calculateGrundy(x) << endl;
                total = calculateGrundy(x);
            }
            else
            {
                cout << calculateGrundy(x) << endl;
                total ^= calculateGrundy(x);
            }
        }

        if (total == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
