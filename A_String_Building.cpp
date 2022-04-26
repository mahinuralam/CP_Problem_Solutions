#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.size();

        ll cnt=0, flag=0;
        for(int i=0; i<n ;i++)
        {
            
            if(s[i]!=s[i+1])
            {
                cnt++;
                if(cnt==1)
                {
                    flag=1;
                }
                cnt=0;
            }
            else if(i==n-1)
            {
                if(cnt==1)
                {
                    flag=1;
                }
            }
            else
            {
                cnt++;
            }
            
        }
        
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        

        
    }

        
    return 0;
}