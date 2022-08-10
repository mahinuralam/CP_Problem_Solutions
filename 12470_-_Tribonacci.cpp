// 1065-Number-Sequence LightOJ
#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

// Matrix Exponentiation
int mod = 1000000009;

void multi(ll a[3][3], ll b[3][3], ll result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] = ((result[i][j] % mod) + (a[i][k] * b[k][j]) % mod) % mod;
            }
        }
    }
}

void expo(ll z[3][3], ll result[3][3], ll n)
{
    ll tmp[3][3];

    result[0][0] = 1;
    result[0][1] = 1;
    result[0][2] = 0;
    result[1][0] = 1;
    result[1][1] = 0;
    result[1][2] = 1;
    result[2][0] = 1;
    result[2][1] = 0;
    result[2][2] = 0;

    while (n)
    {
        if (n % 2)
        {
            multi(result, z, tmp);
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    result[i][j] = tmp[i][j];
                }
            }
        }

        multi(z, z, tmp);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                z[i][j] = tmp[i][j];
            }
        }

        n /= 2;
    }
}

int main()
{
    FAST;

    ll n;
    while (cin >> n && n)
    {

        ll z[3][3], result[3][3];
        memset(result, 0, sizeof(result));

        z[0][0] = 1;
        z[0][1] = 0;
        z[0][2] = 0;
        z[1][0] = 1;
        z[1][1] = 0;
        z[1][2] = 0;
        z[2][0] = 1;
        z[2][1] = 0;
        z[2][2] = 0;

        expo(z, result, n - 3);

        cout << (((result[0][0] * 2) % mod) + (result[0][1]) % mod) % mod << endl;
    }
    return 0;
}
