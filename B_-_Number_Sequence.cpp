// 1065-Number-Sequence LightOJ
#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

// Matrix Exponentiation
int mod;

void multi(ll a[2][2], ll b[2][2], ll result[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] = ((result[i][j] % mod) + (a[i][k] * b[k][j]) % mod) % mod;
            }
        }
    }
}

void expo(ll z[2][2], ll result[2][2], ll n)
{
    ll tmp[2][2];

    result[0][0] = 1;
    result[0][1] = 0;
    result[1][0] = 0;
    result[1][1] = 1;

    while (n)
    {
        if (n % 2)
        {
            multi(result, z, tmp);
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    result[i][j] = tmp[i][j];
                }
            }
        }

        multi(z, z, tmp);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
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
    ll t, cs = 0;
    cin >> t;

    while (t--)
    {
        ll z[2][2], result[2][2];
        memset(z, 0, sizeof(z));
        memset(result, 0, sizeof(result));

        ll a, b, m, k;
        cin >> a >> b >> k >> m;

        z[0][0] = 1;
        z[0][1] = 1;
        z[1][0] = 1;
        z[1][1] = 0;

        mod = pow(10, m);
        a = a % mod;
        b = b % mod;

        k++;
        cout << "Case " << ++cs << ": ";
        if (k == 1)
        {
            cout << a << endl;
            continue;
        }
        else if (k == 2)
        {
            cout << b << endl;
            continue;
        }

        expo(z, result, k - 2);
        cout << (((result[0][0] * b) % mod) + (result[0][1] * a) % mod) % mod << endl;
    }

    return 0;
}
