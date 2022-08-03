#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int target;
        cin >> target;
        int sz = 10, flag = 0;

        for (int i = 9; i >= 1; i--)
        {
            int sum = i;
            if (sum == target)
            {
                cout << i << endl;
                flag = 1;
                break;
            }

            for (int j = i - 1; j >= 1; j--)
            {

                int sum = i + j;
                if (sum == target)
                {
                    cout << j << i << endl;
                    flag = 1;
                    break;
                }

                for (int k = j - 1; k >= 1; k--)
                {

                    int sum = i + j + k;
                    if (sum == target)
                    {
                        cout << k << j << i << endl;
                        flag = 1;
                        break;
                    }

                    for (int l = k - 1; l >= 1; l--)
                    {

                        int sum = i + j + k + l;
                        if (sum == target)
                        {
                            cout << l << k << j << i << endl;
                            flag = 1;
                            break;
                        }

                        for (int m = l - 1; m >= 1; m--)
                        {

                            int sum = i + j + k + l + m;
                            if (sum == target)
                            {
                                cout << m << l << k << j << i << endl;
                                flag = 1;
                                break;
                            }

                            for (int n = m - 1; n >= 1; n--)
                            {

                                int sum = i + j + k + l + m + n;
                                if (sum == target)
                                {
                                    cout << n << m << l << k << j << i << endl;
                                    flag = 1;
                                    break;
                                }

                                for (int o = n - 1; o >= 1; o--)
                                {

                                    int x = i + j + k + l + m + n + o;
                                    if (x == target)
                                    {
                                        cout << o << n << m << l << k << j << i << endl;
                                        flag = 1;
                                        break;
                                    }
                                    for (int p = o - 1; p >= 1; p--)
                                    {

                                        int x = i + j + k + l + m + n + o + p;
                                        if (x == target)
                                        {
                                            cout << p << o << n << m << l << k << j << i << endl;
                                            flag = 1;
                                            break;
                                        }

                                        for (int q = p - 1; q >= 1; q--)
                                        {
                                            int x = i + j + k + l + m + n + o + p + q;
                                            if (x == target)
                                            {
                                                cout << q << p << o << n << m << l << k << j << i << endl;
                                                flag = 1;
                                                break;
                                            }
                                        }

                                        if (flag == 1)
                                        {
                                            break;
                                        }
                                    }
                                    if (flag == 1)
                                    {
                                        break;
                                    }
                                }
                                if (flag == 1)
                                {
                                    break;
                                }
                            }
                            if (flag == 1)
                            {
                                break;
                            }
                        }
                        if (flag == 1)
                        {
                            break;
                        }
                    }
                    if (flag == 1)
                    {
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    }

    return 0;
}
