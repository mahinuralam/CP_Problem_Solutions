#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
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
    FAST;
    int CASE;
    cin >> CASE;
    while (CASE--)
    {
        int n, c, k;
        cin >> n >> c >> k;
        int ar[n], mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
    }

    return 0;
}
