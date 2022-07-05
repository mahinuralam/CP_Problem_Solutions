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

int calculateGrundy(int n, int Grundy[])
{
    Grundy[0] = 0;
    Grundy[1] = 0;
    Grundy[2] = 0;

    if (Grundy[n] != -1)
        return (Grundy[n]);

    unordered_set<int> Set;
    int m;
    if (n % 2 == 0)
    {
        m = n / 2 - 1;
    }
    else
    {
        m = n / 2;
    }
    for (int i = 1; i <= m; i++)
    {
        Set.insert(calculateGrundy(n - i, Grundy) ^ calculateGrundy(i, Grundy));
    }

    Grundy[n] = calculateMex(Set);

    return (Grundy[n]);
}

int main()
{
    FAST;
    ll t, tc = 0;
    cin >> t;

    int Grundy[10005];
    memset(Grundy, -1, sizeof(Grundy));

    for (int i = 1; i <= 10005; i++)
    {
        calculateGrundy(i, Grundy);
    }

    while (t--)
    {
        ll n;
        cin >> n;

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            total ^= calculateGrundy(x, Grundy);
        }

        cout << "Case " << ++tc << ": ";
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
