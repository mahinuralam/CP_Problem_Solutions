#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll nn;
        cin >> nn;
        ll arr[nn];

        for (int i = 0; i < nn; i++)
        {
            cin >> arr[i];
        }

        ll mm;
        cin >> mm;
        ll arr2[mm];

        for (int i = 0; i < mm; i++)
        {
            cin >> arr2[i];
        }
        sort(arr2, arr2 + mm);
        sort(arr, arr + nn);

        if (arr[nn - 1] < arr2[mm - 1])
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
        else if (arr[nn - 1] > arr2[mm - 1])
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }
    }

    return 0;
}
