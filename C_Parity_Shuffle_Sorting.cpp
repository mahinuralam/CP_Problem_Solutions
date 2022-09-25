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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        ll od = 0, ev = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];

            if (ar[i] % 2 == 0)
            {
                od = 1;
            }
            else
            {
                ev = 1;
            }
        }

        vector<pair<int, int>> vp;
        ll ase = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i + 1] < ar[i])
            {
                ase = 1;
            }
        }

        if (ase == 0)
        {
            cout << 0 << endl;
            continue;
        }

        if (od == 0)
        {
            for (int i = n - 1; i >= 2; i--)
            {
                if (ar[i] < ar[i - 1])
                {
                    vp.push_back({i - 1 + 1, i + 1});
                    ar[i] = ar[i - 1];
                }
            }
        }
        else if (ev == 0)
        {
            for (int i = n - 1; i >= 2; i--)
            {
                if (ar[i] < ar[i - 1])
                {
                    vp.push_back({i - 1 + 1, i + 1});
                    ar[i - 1] = ar[i];
                }
            }
        }
        else
        {
            ll start;

            if (ar[0] % 2 == 1)
            {
                ll mx = 0, pos = 0, flag = 0, cnt = 0;
                for (int i = 0; i < n; i++)
                {
                    if (ar[i] % 2 != 0)
                    {
                        mx = max(mx, ar[i]);
                        pos = i + 1;
                        flag = 1;
                    }
                    else
                    {
                        ar[i] = mx;
                        if (flag == 1)
                        {
                            // cout << pos << " " << i + 1 << endl;
                            vp.push_back({pos, i + 1});
                        }
                    }
                }

                for (int i = 1; i < n; i++)
                {
                    if (ar[i] % 2 == 0)
                    {
                        vp.push_back({1, i + 1});
                    }
                }
            }
            else
            {
                ll mx = 0, pos = 0, flag = 0, cnt = 0;
                for (int i = 0; i < n; i++)
                {
                    if (ar[i] % 2 == 0)
                    {
                        mx = max(mx, ar[i]);
                        pos = i + 1;
                        flag = 1;
                    }
                    else
                    {
                        ar[i] = mx;
                        if (flag == 1)
                        {
                            // cout << pos << " " << i + 1 << endl;
                            vp.push_back({pos, i + 1});
                        }
                    }
                }

                for (int i = 1; i < n; i++)
                {
                    vp.push_back({1, i + 1});
                }

                // for (int i = 0; i < n; i++)
                // {
                //     cout << ar[i] << " ";
                // }
                // cout << endl;
            }
        }

        for (int i = 0; i < n; i++)
        {
            // cout << ar[i] << " ";
        }
        // cout << endl;

        cout << vp.size() << endl;
        for (int i = 0; i < vp.size(); i++)
        {
            cout << vp[i].first << " " << vp[i].second << endl;
        }
    }

    return 0;
}
