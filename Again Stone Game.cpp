#include <bits/stdc++.h>
using namespace std;

int Grundy(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return Grundy(n / 2);
    }
}

int main()
{
    int t, tc = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            total ^= Grundy(x);
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

    return (0);
}
