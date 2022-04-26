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
        map<char,ll>left,right,same;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            char chl = s[0];
            char chr = s[1];
    
            if(chl==chr)
            {
                same[chl]++;
            }
            left[chl]++;
            right[chr]++;
        }

        ll ans=0;
        for(char i='a'; i<='k'; i++)
        {
            cout<<left[i]<<" left "<<i<<" right "<<right[i]<<endl;
            ans += (left[i] * (left[i]-1))/2;
            ans += (right[i] * (right[i]-1))/2;
        }c

        cout<<ans<<endl;
        ll neg=0;
        for(char i='a'; i<='k'; i++)
        {
            cout<<same[i]<<"  same "<<i<<endl;
            neg += (same[i] * (same[i]-1))/2;
        }

        cout<<neg<<endl;

        cout<<ans-(neg*2)<<endl;

        
    }

        
    return 0;
}