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
        int min_a = abs(a - a) + abs(b - a) + abs(c - a);
        int min_b = abs(a - b) + abs(b - b) + abs(c - b);
        int min_c = abs(a - c) + abs(b - c) + abs(c - c);
        cout << min({min_a, min_b, min_c}) << endl;
    }
    return 0;
}