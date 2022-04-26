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
        string s;
        cin >> s;
        ll n = s.size();

        if (s[0] == 'B' || s[n - 1] == 'A')
        {
            cout << "NO" << endl;
            continue;
        }

        ll a = 0, b = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else 
            {
                b++;
            }


            if(b>a)
            {
                flag = 1;
                break;
            }
            
        }

        if(flag == 1)
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