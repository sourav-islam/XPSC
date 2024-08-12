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
        int n, a, b, p;
        cin >> n >> a >> b >> p;
        n += (n * p) / 100.0;
        if (n >= a && n <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}