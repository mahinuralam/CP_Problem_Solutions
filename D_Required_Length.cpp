#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sizee(ll n)
{
    ll szz = 0;
    while (n > 0)
    {
        szz++;
        n /= 10;
    }

    return szz;
}

int main()
{
    ll n, x;
    cin >> n >> x;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

    pq.push({0, x});

    map<ll, ll> mp;

    while (!pq.empty())
    {
        pair<ll, ll> pr = pq.top();
        pq.pop();

        ll mv = pr.first;
        ll val = pr.second;

        ll siz = sizee(val);

        // cout << siz << " size " << val << endl;

        if (siz == n)
        {
            cout << mv << endl;
            return 0;
        }

        if (siz > n)
        {
            continue;
        }

        ll temp = val;

        while (temp > 0)
        {
            ll digit = temp % 10;
            temp = temp / 10;

            // cout << val << " val temp " << digit << endl;

            if (digit > 1)
            {
                ll now = digit * val;

                if (mp[now] == 0)
                {
                    pq.push({mv + 1, now});

                    mp[now]++;
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}