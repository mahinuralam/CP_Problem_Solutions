#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll nn;
        cin >> nn;
        ll arr[nn + 1];
        for (int i = 0; i < nn; i++)
        {
            cin >> arr[i];
        }
        ll ps1 = -1, ps2 = -1;
        for (int i = 0; i < nn; i++)
        {
            if (arr[i] != i && ps1 == -1)
            {
                ps1 = i;
                continue;
            }
            if (arr[i] != i)
            {
                ps2 = i;
            }
        }
        ll ans = arr[ps1];
        for (int i = ps1 + 1; i <= ps2; i++)
        {
            if (arr[i] != i)
            {
                ans = ans & arr[i];
            }
        }

        // cout << "asdnj" << endl;
        cout << ans << endl;
    }

    return 0;
}
