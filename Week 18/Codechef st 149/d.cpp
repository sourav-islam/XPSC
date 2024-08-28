#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sqr = c * c;
        if (sqr >= (a * b))
            cout << 0 << "\n";
        else
        {
            int newB = (sqr + a - 1) / a;
            int cost1 = abs(newB - b);

            int newA = (sqr + b - 1) / b;
            int cost2 = abs(newA - a);

            int minCost = min(cost1, cost2);
            cout << minCost << "\n";
        }
    }
    return 0;
}