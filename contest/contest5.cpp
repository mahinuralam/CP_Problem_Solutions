#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fun(ll n)
{
    if (n == 4)
        return 2;
    else
        return 2 * fun(n + 1);
}

int main()
{

    cout << fun(2);
    return 0;
}