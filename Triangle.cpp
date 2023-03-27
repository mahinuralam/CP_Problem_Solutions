#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
// #define endl '\n'
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: \n";
    cin >> n;

    int ar[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                ar[i][j] = 1;
            }
            else
            {
                ar[i][j] = ar[i - 1][j - 1] + ar[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int space = n - 1 - i;
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
