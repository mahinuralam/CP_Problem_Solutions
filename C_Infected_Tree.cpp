#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
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

        vector<pair<int, int>> vp;
        vector<int> inf;

        ll cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            vp.push_back({x, y});
            if (x == 1)
            {
                inf.push_back(y);
                cnt3++;
            }
        }

        if (cnt3 == 0)
        {
            cout << n - 1 << endl;
            continue;
        }

        if (inf.size() == 1)
        {

            // cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;

            cout << n - 2 << endl;
        }
        else
        {

            for (int i = 0; i < n - 1; i++)
            {
                if (vp[i].first == inf[0])
                {
                    cnt1++;
                }

                if (vp[i].first == inf[1])
                {
                    cnt2++;
                }
            }

            // cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;

            cout << n - 1 - min(cnt1, cnt2) - 1 - 1 << endl;
        }

        vp.clear();
        inf.clear();
    }

    return 0;
}
