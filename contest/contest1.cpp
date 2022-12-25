#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll inversion_count(vector<int>& ar, int n)
{
    ll zero = 0;
    for (ll i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            zero++;
        }
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            zero--;
        }
        else
        {
            count += zero;
        }
    }
    return count;
}

void solve()
{
    int n; cin>>n;
    vector<int>v_ori;
    for(int i = 0; i<n; i++)
    {
        int x; cin>>x;
        v_ori.push_back(x);
    }
    vector<int>v_first_modi(v_ori.begin(), v_ori.end()), v_last_modi(v_ori.begin(), v_ori.end());
    for(int i = 0; i<n; i++)
    {
        if(v_first_modi[i] == 0)
        {
            v_first_modi[i] = 1;
            break;
        }
    }
    for(int i = n-1; i>=0; i--)
    {
        if(v_last_modi[i] == 1)
        {
            v_last_modi[i] = 0;
            break;
        }
    }
    ll ori = inversion_count(v_ori, n);
    ll first_modi = inversion_count(v_first_modi, n);
    ll last_modi = inversion_count(v_last_modi, n);

    ll ans = max(ori, max(first_modi, last_modi));
    cout << ans << endl;
}

int main()
{
    ll test_case;
    cin >> test_case;
    for(int i = 0; i<test_case; i++)
    {
        solve();
    }

    return 0;
}