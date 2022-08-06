#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    // FAST;
    int n;
    cin >> n;
    int cnt = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
