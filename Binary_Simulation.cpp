#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

#define MOD 1000000007
using namespace std;
const ll sz = 1000007;

ll fre[sz];

void update(ll idx, ll val)
{
    while (idx <= sz)
    {
        fre[idx] += val;
        idx += (idx & -idx);
    }
}

ll query(ll idx)
{
    ll ans = 0;
    while (idx)
    {
        ans += fre[idx];
        idx -= (idx & -idx);
    }
    return ans;
}

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        string s;

        int q;
        cin >> s >> q;

        memset(fre, 0, sizeof(fre));

        cout << "Case " << ++cs << ": " << endl;
        while (q--)
        {
            char ch;
            cin >> ch;
            int x, y;
            if (ch == 'I')
            {
                cin >> x >> y;
                update(x, 1);
                update(y + 1, -1);
            }
            else
            {
                int pos;
                cin >> pos;
                ll res = query(pos);
                if (res == 0)
                {
                    cout << s[pos - 1] << endl;
                }
                else
                {
                    int vv = s[pos - 1] - '0';

                    if (vv == 1)
                    {
                        cout << 0 << endl;
                    }
                    else
                    {
                        cout << 1 << endl;
                    }
                }
            }
        }
    }

    return 0;
}
