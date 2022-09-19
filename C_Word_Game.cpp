#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> mp1, mp2, mp3, mp;
        int p1 = 0, p2 = 0, p3 = 0;
        vector<string> vs;
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp1[s]++;
                    if (mp[s] == 0)
                    {
                        vs.push_back(s);
                        mp[s]++;
                    }
                }
            }
            else if (i == 2)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp3[s]++;
                    if (mp[s] == 0)
                    {
                        vs.push_back(s);
                        mp[s]++;
                    }
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp2[s]++;
                    if (mp[s] == 0)
                    {
                        vs.push_back(s);
                        mp[s]++;
                    }
                }
            }
        }

        for (int i = 0; i < vs.size(); i++)
        {
            if (mp1[vs[i]] == 1 && mp2[vs[i]] == 0 && mp3[vs[i]] == 0)
            {
                p1 += 3;
            }
            else if (mp1[vs[i]] == 1 && mp2[vs[i]] == 1 && mp3[vs[i]] == 0)
            {
                p1 += 1;
                p2 += 1;
            }
            else if (mp1[vs[i]] == 1 && mp2[vs[i]] == 1 && mp3[vs[i]] == 1)
            {
                continue;
            }
            else if (mp1[vs[i]] == 1 && mp2[vs[i]] == 0 && mp3[vs[i]] == 1)
            {
                p1 += 1;
                p3 += 1;
            }
            else if (mp1[vs[i]] == 0 && mp2[vs[i]] == 1 && mp3[vs[i]] == 0)
            {
                p2 += 3;
            }
            else if (mp1[vs[i]] == 0 && mp2[vs[i]] == 1 && mp3[vs[i]] == 1)
            {
                p2 += 1;
                p3 += 1;
            }
            else if (mp1[vs[i]] == 1 && mp2[vs[i]] == 0 && mp3[vs[i]] == 1)
            {
                p1 += 1;
                p3 += 1;
            }
            else if (mp1[vs[i]] == 0 && mp2[vs[i]] == 0 && mp3[vs[i]] == 1)
            {
                p3 += 3;
            }
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }

    return 0;
}
