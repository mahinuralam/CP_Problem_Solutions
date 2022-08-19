#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

#define mx 100001
int arr[mx];
int tree[mx * 4];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;

    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);

    tree[node] = min(tree[Left], tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
    {
        return INT_MAX; //বাইরে চলে গিয়েছে
    }

    if (b >= i && e <= j)
    {
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    }

    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;

    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return min(p1, p2); //বাম এবং ডান পাশের যোগফল
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; //বাইরে চলে গিয়েছে
    if (b >= i && e <= i)
    {
        tree[node] = newvalue; //রিলেভেন্ট সেগমেন্ট
        return;
    }
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;

        memset(arr, 0, sizeof(arr));
        memset(tree, 0, sizeof(tree));

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        init(1, 1, n);

        cout << "Case " << ++cs << ": " << endl;

        while (m--)
        {
            int l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r) << endl;
        }
    }

    return 0;
}
