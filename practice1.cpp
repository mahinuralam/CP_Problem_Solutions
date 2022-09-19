#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int Case;
    cin >> Case;
    while (Case--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        if (a == 0 and b == 0)
            cout << -1 << endl;
        else if (a > 0 && b > 0)
            cout << -1 << endl;
        else if ((n - 1) % max(a, b) == 0)
        {
            ll mxx = max(a, b);
            ll mxx_val = mxx;
            ll count = 0, val = 1;
            for (int i = 1; i < n; i++)
            {
                cout << val << " ";
                count++;
                if (count == mxx_val)
                {
                    count = 0;
                    val = i + 2;
                }
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
