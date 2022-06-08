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
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }

        vec.push_back(ar2[0] - ar1[0]);

        for (int i = 1; i < n; i++)
        {
            if (ar1[i] > ar2[i - 1])
            {
                vec.push_back(ar2[i] - ar1[i]);
            }
            else
            {
                vec.push_back(ar2[i] - ar2[i - 1]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
