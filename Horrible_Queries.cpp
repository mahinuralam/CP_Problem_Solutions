#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

const int N = 1000005;
ll tree[4 * N], lazy[4 * N];

void updateRange(int b, int e, int L, int R, int pos, ll val)
{
    if (lazy[pos] != 0)
    {
        tree[pos] += (R - L + 1) * lazy[pos];
        if (L != R)
        {
            lazy[2 * pos + 1] += lazy[pos];
            lazy[2 * pos + 2] += lazy[pos];
        }
        lazy[pos] = 0;
    }
    if (L > R or L > e or R < b)
        return;
    if (L >= b and R <= e)
    {
        tree[pos] += (R - L + 1) * val;
        if (L != R)
        {
            lazy[2 * pos + 1] += val;
            lazy[2 * pos + 2] += val;
        }
        return;
    }
    int mid = (L + R) / 2;
    updateRange(b, e, L, mid, 2 * pos + 1, val);
    updateRange(b, e, mid + 1, R, 2 * pos + 2, val);
    tree[pos] = tree[2 * pos + 1] + tree[2 * pos + 2];
    return;
}

ll getSum(int ql, int qr, int L, int R, int pos)
{
    if (lazy[pos] != 0)
    {
        tree[pos] += (R - L + 1) * lazy[pos];
        if (L != R)
        {
            lazy[2 * pos + 1] += lazy[pos];
            lazy[2 * pos + 2] += lazy[pos];
        }
        lazy[pos] = 0;
    }
    if (L > R or ql > R or qr < L)
        return 0;
    if (L >= ql and qr >= R)
        return tree[pos];
    int mid = (L + R) / 2;
    return getSum(ql, qr, L, mid, 2 * pos + 1) + getSum(ql, qr, mid + 1, R, 2 * pos + 2);
}

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        memset(tree, 0, sizeof(tree));
        memset(lazy, 0, sizeof(lazy));

        cout << "Case " << ++cs << ": " << endl;
        while (q--)
        {
            int tp;
            cin >> tp;
            int x, y, v;
            if (tp == 1)
            {
                cin >> x >> y;
                ll qu = getSum(x, y, 0, n - 1, 0);
                cout << qu << endl;
            }
            else
            {
                cin >> x >> y >> v;
                updateRange(x, y, 0, n - 1, 0, v);
            }
        }
    }

    return 0;
}
