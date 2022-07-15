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

    while (1)
    {
        ll n;
        cin >> n;
        if (n == 0)
        {
            break;
        }

        if (n == 1)
        {
            cout << "Discarded cards:" << endl;

            cout << "Remaining card: " << 1 << endl;
            continue;
        }

        deque<ll> dq;

        for (int i = 1; i <= n; i++)
        {
            dq.push_back(i);
        }

        cout << "Discarded cards:";

        while (dq.size() > 2)
        {
            cout << " " << dq.front() << ",";
            dq.pop_front();

            ll val = dq.front();
            dq.pop_front();
            dq.push_back(val);
        }

        // for (auto it = dq.begin(); it != dq.end(); it++)
        // {
        //     cout << *it << " ";
        // }

        cout << " " << dq.front() << endl;
        cout << "Remaining card: " << dq.back() << endl;
    }

    return 0;
}
