#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

const ll sz = 505;

ll fre[sz][sz];
ll n, m;

void update(ll x, ll y, ll val)
{
    ++x;
    ++y;
    for (ll i = x; i <= n; i += (i & (-i)))
    {
        for (ll j = y; j <= n; j += (j & (-j)))
        {
            fre[i][j] += val;
        }
    }
}

ll query(ll x, ll y)
{
    ++x;
    ++y;
    ll sum = 0;
    for (ll i = x; i > 0; i -= (i & (-i)))
    {
        for (ll j = y; j > 0; j -= (j & (-j)))
        {
            sum += fre[i][j];
        }
    }
    return sum;
}

ll areasum(ll x1, ll y1, ll x2, ll y2)
{
    ll ans = query(x2, y2) - query(x2, y1 - 1) - query(x1 - 1, y2) + query(x1 - 1, y1 - 1);
    return ans;
}

void solution()
{
    cin >> n >> m;
    memset(fre, 0, sizeof(fre));
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < n; j++)
        {
            update(i, j, (s[j] - 'A' + 1));
        }
        v.push_back(s);
    }

    while (m--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            ll sum = 0;

            sum = areasum(x1, y1, x2, y2);

            cout << sum << endl;
        }
        else
        {
            ll x, y;
            string p;
            cin >> x >> y >> p;

            if (x == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    update(i, y, (v[i][y] - 'A' + 1) * -1);
                }

                for (int i = 0; i < n; i++)
                {
                    v[i][y] = p[i];
                    update(i, y, (v[i][y] - 'A' + 1));
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    update(y, i, (v[y][i] - 'A' + 1) * -1);
                }
                v[y] = p;
                for (int i = 0; i < n; i++)
                {
                    update(y, i, (v[y][i] - 'A' + 1));
                }
            }
        }
    }
}

int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}
