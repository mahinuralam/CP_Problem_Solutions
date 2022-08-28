    #include <bits/stdc++.h>
    #define FAST                          \
        ios_base::sync_with_stdio(false); \
        cin.tie(0), cout.tie(0);
    #define ll long long
    //#define endl '\n'
    using namespace std;

    int main()
    {
        FAST;
        int t;
        cin >> t;
        while (t--)
        {
            map<char, int> mp;
            string s, ss;
            cin >> s >> ss;

            mp[s[0]]++;
            mp[s[1]]++;
            mp[ss[0]]++;
            mp[ss[1]]++;

            if (mp.size() == 1)
            {
                cout << 0 << endl;
            }
            else if (mp.size() == 2)
            {
                cout << 1 << endl;
            }
            else if (mp.size() == 3)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 3 << endl;
            }
        }

        return 0;
    }
