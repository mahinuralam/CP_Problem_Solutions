#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

ll nine[] = {0, 9, 0, 999, 0, 99999, 0, 9999999, 0, 999999999, 0, 99999999999, 0, 9999999999999};

ll countDigit(long long n)
{
    return floor(log10(n) + 1);
}

ll two(ll n)
{
    int digits = countDigit(n);
    string s = to_string(n);
    int half = digits / 2;
    string ss;
    for (int i = half; i < digits; i++)
    {
        ss.push_back(s[i]);
    }
    return stoi(ss);
}

ll one(ll n)
{
    int digits = countDigit(n);
    digits /= 2;
    while (digits--)
    {
        n /= 10;
    }
    return n;
}

ll add(ll n)
{
    string s = to_string(n);
    s += to_string(n);
    return stoll(s);
}

ll rec(ll n)
{
    if (n == 9 || n == 999 || n == 99999 || n == 9999999 || n == 999999999 || n == 99999999999 || n == 9999999999999)
    {
        return 0;
    }

    ll digit = countDigit(n);

    if (digit % 2 == 1)
    {
        return (nine[digit] - n);
    }

    ll first = one(n);
    ll second = two(n);

    if (first > second)
    {
        return abs(first - second) + 1 + rec(first);
    }
    else if (second > first)
    {
        return abs(add(second) - n) + 1 + rec(second);
    }
    else if (first == second)
    {
        return 1 + rec(first);
    }
}

int main()
{
    FAST;
    int n;
    cin >> n;

    cout << rec(n) << endl;
    return 0;
}
