#include <bits/stdc++.h>
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll t, cnt = 0;

    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        bool flag = false;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > (n - it->second))
            {
                flag = 1;
            }
        }

        if (n % 2 != 0)
        {
            flag = 1;
        }

        if (flag == false)
        {
            cout << "YES"
                 << endl;

            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";
            }
            cout << " sesh " << ++cnt << endl;

            vector<ll>
                small,
                big;
            sort(ar, ar + n);
            for (int i = 0; i < n / 2; i++)
            {
                small.push_back(ar[i]);
            }
            for (int i = n / 2; i < n; i++)
            {
                big.push_back(ar[i]);
            }

            for (int i = 0; i < n / 2; i++)
            {
                cout << small[i] << " " << big[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO"
                 << " " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << " ";
            }
            cout << " sesh " << ++cnt << endl;
        }
    }

    return 0;
}
