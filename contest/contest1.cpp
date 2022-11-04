#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    ll cs;
    cin >> cs;
    while (cs--)
    {
        ll n;
        cin >> n;

        // cout << "for " << n << endl;

        string s = "BAN", str;

        for (int i = 0; i < n; i++)
        {
            str += s;
        }

        // cout << str << endl;
        vector<int> v1, v2;
        int i = 0, j = str.size() - 1, cnt = 0;
        while (i < j)
        {
            if (str[j] != 'N')
            {
                j--;
            }
            else
            {
                if (str[i] != 'N')
                {
                    v1.push_back(i + 1);
                    v2.push_back(j + 1);
                    // cout << str[i] << " " << str[j] << endl;
                    swap(str[i], str[j]);
                }
                else
                {
                    i += 3;
                }
            }
        }

        cout << v1.size() << endl;
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " " << v2[i] << endl;
        }

        // cout << str << endl;
    }

    return 0;
}
