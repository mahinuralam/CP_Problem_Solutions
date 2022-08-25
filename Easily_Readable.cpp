#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

vector<string> split(string s)
{
    vector<string> v;

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        sort(word.begin() + 1, word.end() - 1);
        v.push_back(word);
    }

    return v;
}

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<string> vs;
        map<string, int> mp;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            sort(s.begin() + 1, s.end() - 1);
            // vs.push_back(s);
            // cout << s << endl;
            mp[s]++;
        }

        int m;
        cin >> m;
        cin.ignore();
        string s;
        getline(cin, s);

        // cout << s << endl;
        vector<string> word = split(s);
        int cnt = 0;
        cout << "Case " << ++cs << ":" << endl;
        for (int i = 0; i < word.size(); i++)
        {
            // cout << word[i] << endl;
            if (mp[word[i]] != 0)
            {
                cnt += mp[word[i]];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
