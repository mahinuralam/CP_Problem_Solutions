#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int f(int ind1, int ind2, s1, s2)
{
    if (ind1 == 0 || ind2 == 0)
        return 0;

    if (s1[i] == s2[i])
        return 1 + f(ind1 - 1, ind2 - 1, s1, s2);

    int take = f(s1 - 1, s2, s1, s2);
    int notTake = f(s1, s2 - 1, s1, s2));

    return max(take, notTake);
}

int main()
{
    FAST;
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        f(0, 0, s1, s2);
    }

    return 0;
}
