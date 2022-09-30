#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n + 1];
    for (long long i = 1; i <= n; i++)
        cin >> arr[i];
    long long _max = -1;
    long long sum = 0;
    for (long long i = 1; i <= k; i++)
    {
        for (long long j = i; j <= n; j += k)
        {
            _max = max(_max, arr[j]);
        }
        sum += _max;
        _max = -1;
    }
    cout << sum << endl;
}
int main()
{
    long long test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}