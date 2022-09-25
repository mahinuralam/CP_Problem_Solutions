#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;
#define DBG(a) cerr << "line " << __LINE__ << " : " << #a << " --> " << (a) << endl
int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ar[n][m];
        vector<vector<ll>> v1, v2;
        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                ll x;
                cin >> x;
                v.push_back(x);
            }
            v1.push_back(v);
            v.clear();
        }

        cout << " UNSORTED " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v1[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            v = v1[i];
            sort(v.begin(), v.end());
            v2.push_back(v);
            v.clear();
        }

        cout << " SORTED " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v2[i][j] << " ";
            }
            cout << endl;
        }

        ll flag = 0;
        vector<string> vs1, vs2;
        // unsorted
        for (int i = 0; i < m; i++)
        {
            string s;
            for (int j = 0; j < n; j++)
            {
                s += to_string(v1[j][i]);
            }
            vs1.push_back(s);
        }

        // sorted
        for (int i = 0; i < m; i++)
        {
            string s;
            for (int j = 0; j < n; j++)
            {
                s += to_string(v2[j][i]);
            }
            vs2.push_back(s);
        }
        map<string, ll> mp;

        // sorted
        for (int i = 0; i < vs2.size(); i++)
        {
            // cout << vs2[i] << endl;
            mp[vs2[i]] = i + 1;
        }

        vector<pair<string, ll>> vv;
        // unsorted
        for (int i = 0; i < vs1.size(); i++)
        {
            // cout << vs1[i] << endl;
            if (mp[vs1[i]] == 0)
            {
                // cout << mp[vs1[i]] << " pai nai " << endl;
                flag = 1;
                break;
            }
        }
        // cout << endl;

        // cout << endl;

        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            map<ll, ll> mpp;
            // cout << "YESSS" << endl;
            ll done = 0;
            for (int i = 0; i < vs1.size(); i++)
            {
                if (vs1[i] != vs2[i] && mpp[i + 1] == 0 && mpp[mp[vs1[i]]] == 0)
                {
                    done = 1;
                    mpp[i + 1]++;
                    mpp[mp[vs1[i]]]++;
                    cout << i + 1 << " " << mp[vs1[i]] << endl;
                }
            }

            if (done == 0)
            {
                cout << 1 << " " << 1 << endl;
            }
        }
    }

    return 0;
}
