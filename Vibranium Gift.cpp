#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;
const double pi = acos(-1.0);

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        double m, d;
        cin >> m >> d;

        double v = m / d;

        double r = cbrt((v * 3) / (4 * pi));

        double area = 4 * pi * r * r;
        cout << fixed << setprecision(4);
        cout << "Case " << ++cs << ": ";
        cout << area << endl;
    }

    return 0;
}
