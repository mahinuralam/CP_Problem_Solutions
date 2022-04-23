#include<bits/stdc++.h>
#define     FAST            ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;
int main()
{

    ll n,m;
    cin>>n>>m;
    multiset<ll, greater<ll> >st;
    ll ar2[m];
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }

    for(int i=0; i<m; i++)
    {
        cin>>ar2[i];
    }



    for(int i=0; i<m; i++)
    {
        auto it = st.lower_bound(ar2[i]);
        //int x = *it;
        //cout<<x<<" val "<<endl;

        if(it==st.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*it<<endl;
            st.erase(it);
        }
        //cout<<x<<" index "<<y<<endl;

    }



    return 0;
}

