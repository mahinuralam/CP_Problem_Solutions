#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

// CPP Program to find the sum of Binomial
// Coefficient.

ll min(ll a, ll b);
ll C[51][51];
// Returns value of Binomial Coefficient C(n, k)
ll binomialCoeff(ll n, ll k)
{
    ll i, j;
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    return C[n][k];
}

ll min(ll a, ll b) { return (a < b) ? a : b; }

/* Driver program to test above function*/
int main()
{
    FAST;
    ll n, k, tc = 0;
    binomialCoeff(51, 51);
    while (cin >> n >> k)
    {
        if (n == 0)
        {
            break;
        }
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << "Case " << ++tc << ":" << endl;
        for (int i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            cout << C[st.size()][x] << endl;
        }
    }

    return 0;
}