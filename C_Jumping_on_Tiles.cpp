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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<pair<char, int>> vp;
        int start = s[0], end = s[n - 1];
        // cout << start << " " << end << endl;
        int move = 1, cost = 0, tmp = start;

        for (int i = 1; i < n - 1; i++)
        {
            vp.push_back({s[i], i + 1});
        }

        if (start > end)
        {
            sort(vp.rbegin(), vp.rend());
        }
        else
        {
            sort(vp.begin(), vp.end());
        }

        // for (int i = 0; i < vp.size(); i++)
        // {
        //     cout << vp[i].first << " " << vp[i].second << endl;
        // }

        vector<int> jumps;

        jumps.push_back(1);

        for (int i = 0; i < vp.size(); i++)
        {
            char ch = vp[i].first;
            int indx = vp[i].second;

            if (ch >= end && ch <= start && start > end)
            {
                // cout << ch << " in " << int(ch) << endl;
                jumps.push_back(indx);
                // cout << abs(tmp - ch) << endl;
                cost += abs(tmp - ch);
                move++;
                tmp = ch;
            }

            if (ch <= end && ch >= start && start <= end)
            {
                // cout << ch << " in " << int(ch) << endl;
                jumps.push_back(indx);
                // cout << abs(tmp - ch) << endl;
                cost += abs(tmp - ch);
                move++;
                tmp = ch;
            }
        }

        jumps.push_back(n);
        cost += abs(tmp - end);
        move++;

        cout << cost << " " << move << endl;
        for (auto x : jumps)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
