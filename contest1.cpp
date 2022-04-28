    #include <bits/stdc++.h>
    #define FAST                          \
        ios_base::sync_with_stdio(false); \
        cin.tie(0), cout.tie(0);
    #define ll long long
    //#define endl '\n'
    using namespace std;
     
    int main()
    {
        ll t,cnt=0;
        cin >> t;
        while (t--)
        {
            ll n;
            cin >> n;
            ll ar[n+1];
            map<ll, ll> mp;
            for (int i = 0; i < n; i++)
            {
                cin >> ar[i];
            }
     
     
            ll flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                ll dif = ar[i + 1] - ar[i];
     
                if (dif == 1)
                {
                    if(mp[i]==0&&mp[i+1]==0)
                    {
                        mp[i] = 1;
                        ar[i]++;
                        mp[i + 1] = 1;
                        ar[i+1]++;
                    }
                    else
                    {
                        mp[i + 1] = 1;
                        mp[i] = 1;
                    }
                    
                }
                else if (dif == 0)
                {
                    if(mp[i]==1&&mp[i+1]==0)
                    {
                        mp[i + 1] = 1;
                        ar[i+1]++;
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                else if (dif > 3)
                {
                    flag = 1;
                    break;
                }
                else if (dif == 2)
                {
                    if (mp[i] == 0 && mp[i+1] == 0)
                    {
                        mp[i] = 1;
                        ar[i]++;
                        mp[i+1] = 1;
                    }
                    else if (mp[i] == 1 && mp[i + 1] == 0)
                    {
                        mp[i + 1] = 1;
                        ar[i+1]--;
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    if (mp[i] == 0 && mp[i + 1] == 0)
                    {
                        mp[i] = 1;
                        ar[i]++;
                        mp[i + 1] = 1;
                        ar[i + 1]--;
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
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