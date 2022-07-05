#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    ll n;

    while (cin >> n)
    {
        string s = "Stan wins.";
        ll turn = 1;
        while (n > 1)
        {
            if (turn % 2 == 0)
            {
                if (n % 2 == 0)
                {
                    n /= 2;
                }
                else
                {
                    n = (n / 2) + 1;
                }

                s = "Ollie wins.";
            }
            else
            {
                if (n % 9 == 0)
                {
                    n /= 9;
                }
                else
                {
                    n = (n / 9) + 1;
                }

                s = "Stan wins.";
            }

            turn++;
        }

        cout << s << endl;
    }

    return 0;
}
