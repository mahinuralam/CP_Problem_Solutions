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
        ll n;
        cin>>n;
        ll ar[n];

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        ll sm1=0,sm2=0,i,j,ans=0,total=0;
        for(i=0,j=n-1;i<=j;)
        {
            
            if(sm1==0&&sm2==0)
            {
                sm1 += ar[i];
                i++;
                ans++;
            }
            else 
            {

                if(sm1 > sm2)
                {

                    sm2 += ar[j];
                    j--;
                    ans++;

                }
                else
                {
                    sm1 += ar[i];
                    i++;
                    ans++;
                }



            }

            if(sm1 == sm2)
            {
                total = ans;
            }


        }

        //cout<<i<<" "<<j<<endl;
        //cout<<sm1<<" "<<sm2<<endl;        
        cout<<total<<endl;
    }

        
    return 0;
}