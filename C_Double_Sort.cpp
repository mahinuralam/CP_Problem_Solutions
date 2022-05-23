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
        vector<pair<ll, ll>> vp1, vp2;

        vector<ll> vv1, vv2;

        for (int i = 0; i < nn; i++)
        {
            ll x;
            cin >> x;
            vv1.push_back(x);
        }

        for (int i = 0; i < nn; i++)
        {
            ll x;
            cin >> x;
            vv2.push_back(x);
        }

        for (int i = 0; i < nn; i++)
        {
            vp1.push_back({vv1[i], vv2[i]});
            vp2.push_back({vv1[i], vv2[i]});
        }

        sort(vp1.begin(), vp1.end());

        ll flag = 0;
        ll x, y;

        for (int i = 1; i < nn; i++)
        {
            x = vp1[i - 1].second;
            y = vp1[i].second;

            if (x > y)
            {
                flag = 1;
            }
        }

        for (int i = 1; i < nn; i++)
        {
            x = vp1[i - 1].first;
            y = vp1[i].first;

            if (x > y)
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            ll xx, yy;
            vector<pair<ll, ll>> move;
            for (int i = 0; i < nn; i++)
            {
                for (int j = i + 1; j < nn; j++)
                {
                    ll x = vp2[i].first;
                    ll y = vp2[i].second;

                    xx = vp2[j].first;
                    yy = vp2[j].second;

                    if (y > yy || x > xx)
                    {
                        swap(vp2[i].first, vp2[j].first);
                        swap(vp2[i].second, vp2[j].second);
                        move.push_back({i + 1, j + 1});
                    }
                }
            }

            cout << move.size() << endl;

            for (int i = 0; i < move.size(); i++)
            {
                cout << move[i].first << " " << move[i].second << endl;
            }
        }
    }

    return 0;
}
