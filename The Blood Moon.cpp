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
        double r;
        cin >> r;

        double AD = sqrt((r * r) + (r * r));
        double AE = AD / 2;
        double AF = sqrt((AE * AE) + (AE * AE));
        double area1 = (pi * (AF / 2) * (AF / 2)) / 2;
        // area1 /= 2;

        double area2 = ((pi * (AD / 2) * (AD / 2)) / 4) - (0.5 * (AD / 2) * (AD / 2));
        // area2 /= 4;
        // area2 -= (0.5 * (AD / 2) * (AD / 2));

        double ans = area1 - area2;

        cout << "Case " << ++cs << ": ";

        cout << fixed << setprecision(4);
        cout << ans << endl;
    }

    return 0;
}
