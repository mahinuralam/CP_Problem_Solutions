// Problem: No Chill in The Sea Beach.
// Contest: HackerRank - IUBAT Monthly Contest - June 2022
// URL: https://www.hackerrank.com/contests/monthly-contest-june-2022/challenges/no-chill-in-sea-beach-
// Memory Limit: 512 MB
// Time Limit: 4000 ms
//
// Powered by CP Editor (https://cpeditor.org)

//________________________________________________________________________________________
//
//                BISMILLAHIR RAHMANIR RAHIM
//                TANVIR AHMED KHAN
//________________________________________________________________________________________
//

#include <bits/stdc++.h>

typedef long long ll;
const ll MOD = 1e9 + 7;
const ll MaxN = 2000007;
using namespace std;

//________________________________________________________________________________________
//

#define pb push_back
#define endl "\n"
#define f first
#define s second
#define pi 2 * acos(0.0)
#define cy cout << "Yes\n";
#define cn cout << "No\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);

//________________________________________________________________________________________
//

void solve()
{
    ll n, m, t;
    cin >> n >> m;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mp[t]++;
    }
    for (auto u : mp)
    {

        // cout << u.f <<" "<<u.second<<endl;

        ll p = m - u.f;
        // cout << p << endl;

        if (u.first == m or p == m)
            continue;

        if (m % 2 == 0 and p == (m / 2))
        {

            if (mp[p] <= 1)
                continue;
        }

        // if(mp[m]>=1)continue;

        auto it = mp.find(p);

        if (it != mp.end())
        {

            cout << "FOUND IT!\n";
            return;
        }
    }
    cout << "IMPOSSIBLE\n";
}

int main()
{

    FAST

    /// With Test Case

    // int test_case, c = 0; cin >> test_case; while(test_case--) {cout <<"Case "<<++c<<": "; solve();}

    /// Without Test Case

    // int test_case; cin >> test_case; while(test_case--)

    solve();

    return 0;
}

//________________________________________________________________________________________
//
//             ALHAMDULILLAH
//________________________________________________________________________________________
//