#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define int long long
//#define endl '\n'
using namespace std;

int main()
{
    FAST;
    int n, q;
    cin >> n >> q;
    vector<int> vec;
    vector<int> vec2;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.rbegin(), vec.end());

    vec2[0] = vec2[0];

    for (int i = 1; i < n; i++)
    {
        vec2[i] = vec2[i - 1] + vec[i];
    }

    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u == v)
        {
            cout << vec2[u - 1] << endl;
            continue;
        }
        int ans = vec2[u - 1] - vec2[(u - v - 1)] cout << ans << endl;
    }
    cout << endl;

    return 0;
}
