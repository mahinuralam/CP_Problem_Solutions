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
        string s;
        cin >> s;

        if (n == 1)
        {
            if (s[0] == 'W')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }

        if (n == 2)
        {
            if (s == "WR" || s == "WB" || s == "RW" || s == "BW" || s == "RR" || s == "BB")
            {
                cout << "NO" << endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }
            continue;
        }

        string ss;
        ss = s;

        ll flag = 0;

        vector<string> v;

        string z;
        for (int i = 0; i < ss.size(); i++)
        {
            if (s[i] == 'W')
            {
                v.push_back(z);
                z.clear();
            }
            else if(i == ss.size() - 1)
            {
                z += s[i];
                v.push_back(z);
                z.clear();
            }
            else
            {
                z += s[i];
            }
        }

        //cout << t << endl;
        for (int i = 0; i < v.size(); i++)
        {
            //cout << v[i] << endl;

            set<char> st;
            for (int j = 0; j < v[i].size(); j++)
            {
                st.insert(v[i][j]);
            }
            // cout<<st.size()  <<" size "<<endl;
            if (st.size() == 1)
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}