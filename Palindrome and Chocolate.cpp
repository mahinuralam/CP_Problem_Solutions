#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        s = to_string(n);
        string ss;

        ll sz;

        sz = s.size() - 1;

        for (int i = 0; i < sz; i++)
        {
            ss += s[i];
        }

        reverse(ss.begin(), ss.end());

        s += ss;

        cout << "Case " << ++cs << ": ";
        cout << s << endl;
    }

    return 0;
}
