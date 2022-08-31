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
    ll Case;
    cin >> Case;
    while (Case--)
    {
        ll n;
        cin >> n;
        map<string, ll> mp1, mp2, mp3, mp0;
        ll ans1 = 0, ans2 = 0, ans3 = 0;
        vector<string> word;
        for (int i = 0; i < 3; i++)
        {
            if (i == 2)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp3[s]++;
                    if (mp0[s] == 0)
                    {
                        word.push_back(s);
                        mp0[s]++;
                    }
                }
            }
            else if (i == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp1[s]++;
                    if (mp0[s] == 0)
                    {
                        word.push_back(s);
                        mp0[s]++;
                    }
                }
            }
            else if (i == 2)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;
                    mp2[s]++;
                    if (mp0[s] == 0)
                    {
                        word.push_back(s);
                        mp0[s]++;
                    }
                }
            }
        }

        for (int i = 0; i < word.size(); i++)
        {
            if (mp1[word[i]] == 1 && mp2[word[i]] == 1 && mp3[word[i]] == 0)
            {
                ans1 += 1;
                ans2 += 1;
            }
            else if (mp1[word[i]] == 1 && mp2[word[i]] == 0 && mp3[word[i]] == 0)
            {
                ans1 += 3;
            }
            else if (mp1[word[i]] == 1 && mp2[word[i]] == 0 && mp3[word[i]] == 1)
            {
                ans1 += 1;
                ans3 += 1;
            }
            else if (mp1[word[i]] == 0 && mp2[word[i]] == 1 && mp3[word[i]] == 0)
            {
                ans2 += 3;
            }
            else if (mp1[word[i]] == 1 && mp2[word[i]] == 0 && mp3[word[i]] == 1)
            {
                ans1 += 1;
                ans3 += 1;
            }
            else if (mp1[word[i]] == 0 && mp2[word[i]] == 0 && mp3[word[i]] == 1)
            {
                ans3 += 3;
            }
            else if (mp1[word[i]] == 0 && mp2[word[i]] == 1 && mp3[word[i]] == 1)
            {
                ans2 += 1;
                ans3 += 1;
            }
            else if (mp1[word[i]] == 1 && mp2[word[i]] == 1 && mp3[word[i]] == 1)
            {
                continue;
            }
        }

        cout << ans1 << " " << ans2 << " " << ans3 << endl;
    }

    return 0;
}
