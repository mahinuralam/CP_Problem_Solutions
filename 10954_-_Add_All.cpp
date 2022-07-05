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
    while (cin >> n && n != 0)
    {

        priority_queue<ll, vector<ll>, greater<ll>> pq;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }

        ll total = 0;

        while (pq.size() > 1)
        {
            ll val1 = pq.top();
            pq.pop();
            ll val2 = pq.top();
            pq.pop();
            // cout << val1 << " " << val2 << endl;
            ll tmp = val1 + val2;

            pq.push(tmp);

            total += tmp;
        }
        cout << total << endl;
    }

    return 0;
}
