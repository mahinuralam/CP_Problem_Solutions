#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        ll cnt = 0, pos = 0, pos2 = 0;
        vector<ll> v;
        for (int i = 1; i < n; i++)
        {
            if (ar[i - 1] == ar[i] && pos == 0)
            {
                pos = i-1 + 1;
                //cout<<pos<<endl;
            }

            if (ar[i - 1] == ar[i])
            {
                pos2 = i + 1;
            }

        }
        //cout<<pos<<" "<<pos2<<endl;
        if(pos2==0)
        {
            cout<<0<<endl;
            continue;
        }
        pos2 = pos2 - pos + 1;
        ll x = pos2 - 2;
        
        if(x==1)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x-1<<endl;
        }
        
        //cout<<x<<endl;

    }

    return 0;
}