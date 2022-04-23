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
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }   

        map<char,ll>left,right;
        for(int i=0;i<v.size();i++)
        {
            char ch = v[i][0];
            if(ch>='a'&&ch<='k'){
                left[ch]++;
            }
        }


        for(int i=0;i<v.size();i++)
        {
            char ch = v[i][1];
            if(ch>='a'&&ch<='k'){
                right[ch]++;
            }
        }   
        

        ll ans=0;
        for(auto it=left.begin();it!=left.end();it++)
        {
            cout<<it->first<<" left "<<it->second<<endl;
            if(it->second>1){
                ans += (it->second*(it->second-1))/2;
            }
        }

        for(auto it=right.begin();it!=right.end();it++)
        {
            cout<<it->first<<" right "<<it->second<<endl;
            if(it->second>1){
                ans += (it->second*(it->second-1))/2;
            }
            
        }

        cout<<ans<<endl;

        
    }

        
    return 0;
}