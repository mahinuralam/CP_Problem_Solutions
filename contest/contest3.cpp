#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

ll cnt(vector<int> &ar, int n)
{
    ll zo = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            zo++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            zo--;
        }
        else
        {
            total += zo;
        }
    }

    return total;
}

int main()
{
    int CASE;
    cin >> CASE;
    while (CASE--)
    {
        int n;
        cin >> n;
        vector<int> v1, v2, v3;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }

        v2 = v1;
        v3 = v1;

        for (int i = 0; i < n; i++)
        {
            if (v2[i] == 0)
            {
                v2[i] = 1;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (v3[i] == 1)
            {
                v3[i] = 0;
                break;
            }
        }

        ll x = cnt(v1, n);
        ll y = cnt(v2, n);
        ll z = cnt(v3, n);
        ll all = max(x, max(y, z));

        cout << all << endl;
    }

    return 0;
}
