#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int ar1[n], ar2[n];
        set<int> s;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        bool flag = 0;
        int vv = -1;
        for (int i = 0; i < n; i++)
        {
            int x = abs(ar1[i] - ar2[i]);
            if (ar2[i] == 0)
            {
                vec.push_back(x);
            }
            else if (ar1[i] < ar2[i])
            {
                flag = 1;
                break;
            }
            else
            {
                vv = x;
                s.insert(x);
            }
        }
        if (vv != -1 && vec.size() != 0)
        {
            sort(vec.begin(), vec.end());
            int n = vec.size();
            int value = vec[n - 1];

            if (value > vv)
            {
                flag = 1;
            }
        }
        if (flag == 1 || s.size() > 1)
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
