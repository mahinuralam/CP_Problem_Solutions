#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

typedef pair<int, int> PII;
const int MAXN = 1e5 + 7;

int bap[MAXN], sz[MAXN];
int parent(int u)
{
    if (u == bap[u])
        return u;
    return parent(bap[u]);
}

bool unite(int u, int v)
{
    int cu = parent(u);
    int cv = parent(v);
    if (cu == cv)
        return false;
    if (sz[cu] < sz[cv])
        swap(cu, cv);
    bap[cv] = cu;
    sz[cu] += sz[cv];
    return true;
}

void init(ll n)
{

    for (int i = 0; i <= n; i++)
    {
        bap[i] = i;
        sz[i] = 1;
    }
}

int main()
{
    FAST;
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, pair<ll, ll>>> vp;

        init(n);

        for (int i = 0;; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            if (u == 0 && v == 0 && w == 0)
            {
                break;
            }
            vp.push_back({w, {u, v}});
        }

        sort(vp.begin(), vp.end());
        ll cost = 0;

        for (int i = 0; i < vp.size(); i++)
        {
            ll w = vp[i].first;
            ll u = vp[i].second.first;
            ll v = vp[i].second.second;

            if (unite(u, v) == 1)
            {
                // cout << u << " united " << v << endl;
                cost += w;
            }
        }

        init(n);

        sort(vp.rbegin(), vp.rend());
        ll cost2 = 0;

        for (int i = 0; i < vp.size(); i++)
        {
            ll w = vp[i].first;
            ll u = vp[i].second.first;
            ll v = vp[i].second.second;

            if (unite(u, v) == 1)
            {
                // cout << u << " united " << v << endl;
                cost2 += w;
            }
        }

        // cout << cost + cost2 << endl;

        cout << "Case " << ++tc << ": ";
        if ((cost + cost2) % 2 == 0)
        {
            cout << (cost + cost2) / 2 << endl;
        }
        else
        {
            cout << (cost + cost2) << "/" << 2 << endl;
        }
    }

    return 0;
}
