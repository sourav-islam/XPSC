#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        if (s % n <= b && (a * n) + b >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}