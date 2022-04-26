#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
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
        ll sm=0,ev=0,od=0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i]%2!=0)
            {
                od++;
            }
            else
            {
                ev++;
            }
        }

        if(ev==0)
        {
            cout<<"maomao90"<<endl;
        }
        else if(od==0)
        {
            if(ev%2==0)
            {
                cout<<"maomao90"<<endl;
            }
            else
            {
                cout<<"errorgorn"<<endl;
                
            }
        }
        else
        {
            if(ev%2==0)
            {
                cout<<"maomao90"<<endl;
            }
            else
            {
                cout<<"errorgorn"<<endl;
                
            }
        }

        

    }

    return 0;
}