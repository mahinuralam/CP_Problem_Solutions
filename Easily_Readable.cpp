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
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<string> vs;
        map<string, int> mp;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s.size() > 3)
            {
                sort(s.begin() + 1, s.end() - 1);
            }
            mp[s]++;
        }

        int m;
        cin >> m;
        cin.ignore();

        cout << "Case " << ++cs << ":" << endl;

        for (int i = 0; i < m; i++)
        {
            int cnt = 1;
            string s;
            getline(cin, s);

            stringstream ss(s);
            string word;

            while (ss >> word)
            {
                if (word.size() > 3)
                {
                    sort(word.begin() + 1, word.end() - 1);
                }
                cnt *= mp[word];
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
