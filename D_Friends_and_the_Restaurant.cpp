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
        int n;
        cin >> n;
        int cost[n], burls[n];
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            cin >> cost[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> burls[i];
        }

        int zero = 0, total = 0;

        for (int i = 0; i < n; i++)
        {
            int val = burls[i] - cost[i];
            if (val < 0)
            {
                neg.push_back(val);
            }
            else if (val > 0)
            {
                pos.push_back(val);
                total += val;
            }
            else
            {
                zero++;
            }
        }

        sort(neg.rbegin(), neg.rend());
        sort(pos.begin(), pos.end());

        // for (auto x : neg)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        // for (auto x : pos)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        map<int, int> used;

        int cnt = 0, all = pos.size();
        for (int i = 0; i < neg.size(); i++)
        {
            if (pos.size() == 0 || cnt == all || abs(neg[i]) > total)
                break;

            bool flag = 0;
            // cout << neg[i] << " shuru " << endl;
            for (int j = 0; j < pos.size(); j++)
            {
                if (used[j] != 0)
                    continue;

                int val = neg[i] + pos[j];
                if (val >= 0)
                {
                    total -= pos[j];
                    // cout << neg[i] << " nisi " << pos[j] << endl;
                    flag = 1;
                    cnt++;
                    used[j]++;
                    break;
                }
            }

            //  cout << neg[i] << " pai naii " << flag << endl;

            if (flag == 0)
            {
                int sum = neg[i];
                for (int j = 0; j < pos.size(); j++)
                {
                    if (used[j] != 0)
                        continue;

                    sum += pos[j];
                    used[j]++;

                    //    cout << pos[j] << " jog kortesi " << sum << endl;

                    if (sum >= 0)
                    {
                        //     cout << neg[i] << " nisi pore " << pos[j] << endl;
                        flag = 1;
                        cnt++;
                        break;
                    }
                }
            }

            if (flag == 0)
                break;
        }

        int ev = 0;
        for (int i = 0; i < pos.size(); i++)
        {
            if (used[i] == 0)
            {
                //   cout << " unused " << pos[i] << endl;
                ev++;
            }
        }

        ev += zero;

        cout << cnt + (ev / 2) << endl;
    }

    return 0;
}
