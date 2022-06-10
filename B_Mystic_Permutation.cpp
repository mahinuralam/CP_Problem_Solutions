#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, k;
        string s1, s2, s3;
        cin >> n >> m >> k >> s1 >> s2;

        sort(s1.begin(), s1.end());

        sort(s2.begin(), s2.end());

        int lim1 = k, lim2 = k;

        for (int i = 0, j = 0; i < n, j < m;)
        {
            if (lim2 == 0 || (lim1 != 0 && s1[i] < s2[j]))
            {
                s3 += s1[i];

                lim2 = k;
                lim1--;

                i++;
            }
            else
            {
                s3 += s2[j];

                lim1 = k;
                lim2--;

                j++;
            }
        }
        cout << s3 << endl;
    }

    return 0;
}
