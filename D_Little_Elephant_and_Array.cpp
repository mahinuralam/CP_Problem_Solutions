#include <bits/stdc++.h>

using namespace std;

#define MAX 1000005
#define MOD 1000003
#define eps 1e-6
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, 1, -1};

#define FastRead                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define fRead freopen("in.txt", "r", stdin);
#define fWrite freopen("out.txt", "w", stdout);

#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pb push_back
#define PI acos(-1.0)
#define mk make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pii>
#define all(a) a.begin(), a.end()

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, b) for (int i = 0; i < b; i++)
#define IT(it, x) for (it = x.begin(); it != x.end(); it++)

#define MEM(a, x) memset(a, x, sizeof(a))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQ(x) ((x) * (x))
#define SORT(v) sort(v.begin(), v.end())
#define REV(v) reverse(v.begin(), v.end())

int n, q, block_size;
int ans = 0;
int arr[MAX];
ll answer[MAX];
pair<pii, int> qry[MAX];
ll cnt1[MAX], cnt2[MAX];

bool mo_cmp(pair<pii, int> x, pair<pii, int> y)
{
    int blk_x = x.ff.ff / block_size;
    int blk_y = y.ff.ff / block_size;
    if (blk_x != blk_y)
        return blk_x < blk_y;
    return x.ff.ss < y.ff.ss;
}

void add(ll x)
{
    if (x <= 1e6)
    {
        cnt1[x]++;
        if (cnt1[x] == x)
        {
            ans++;
            cnt2[x] = 1;
        }
        else if (cnt2[x] == 1)
        {
            ans--;
            cnt2[x] = 0;
        }
    }
}

void Remove(ll x)
{
    if (x <= 1e6)
    {
        cnt1[x]--;
        if (cnt1[x] == x)
        {
            ans++;
            cnt2[x] = 1;
        }
        else if (cnt2[x] == 1)
        {
            ans--;
            cnt2[x] = 0;
        }
    }
}

int main()
{
    FastRead;
    scanf("%d %d", &n, &q);
    REP(i, n)
    {
        scanf("%d", &arr[i]);
    }

    REP(i, q)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        qry[i].ff.ff = x - 1;
        qry[i].ff.ss = y - 1;
        qry[i].ss = i;
    }
    block_size = sqrt(n);
    sort(qry, qry + q, mo_cmp);
    int ml = 1, mr = 0;
    REP(i, q)
    {
        int l = qry[i].ff.ff;
        int r = qry[i].ff.ss;
        while (mr < r)
        {
            mr++;
            add(arr[mr]);
        }
        while (mr > r)
        {
            Remove(arr[mr]);
            mr--;
        }
        while (ml < l)
        {
            Remove(arr[ml]);
            ml++;
        }
        while (ml > l)
        {
            ml--;
            add(arr[ml]);
        }
        answer[qry[i].ss] = ans;
    }
    REP(i, q)
    {
        printf("%I64d\n", answer[i]);
    }

    return 0;
}