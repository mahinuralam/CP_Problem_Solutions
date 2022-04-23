#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    fast;
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        ll n,r,b,bb;
        cin>>n>>r>>b;
        
        bb = b;
        ll cnt=0;
        string s;

        ll mid = r/b;

        

        if(mid==1)
        {
            mid = 2;
        }

        if(b==1)
        {
            if(n%2==0){
                mid = n/2;
            }
            else {
                mid = n/2 + 1;
            }
        }

        

        //cout<<mid<<" mid " <<endl;
        

        for(int i=0;i<n;i++){
            s+='R';
        }

        for(int i=0;i<n;i++){
            cnt++;
            if(cnt == mid && b > 0)
            {
                b--;
                cnt=0;
                s[i]='B';
                mid = (n - i + 1)/bb;
                bb--;
               // cout<<mid<<" mid "<<endl;
            }
            
            
        }

        cout<<s<<endl;

        
        

        
        
        


 
        
    }

    return 0;
}