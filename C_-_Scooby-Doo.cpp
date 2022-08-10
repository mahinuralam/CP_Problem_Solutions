#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int check(string a, string b)
{
    ll cnt = 0;
    for (int i = 0, j = 0; i < a.size() && j < b.size();)
    {
        if (a[i] != b[j])
        {
            i++;
        }
        else
        {
            cnt++;
            i++;
            j++;
        }
    }

    return cnt;
}

int main()
{
    FAST;

    ll a, b;
    cin >> a >> b;

    string x, y;

    y = to_string(b);
    ll i = 1;
    while (1)
    {
        int val = a + i;
        i++;
        // cout << x << endl;
        x = to_string(val);
        int l = check(x, y);
        if (l == y.size())
        {
            cout << x << endl;
            return 0;
        }
    }
    return 0;
}
