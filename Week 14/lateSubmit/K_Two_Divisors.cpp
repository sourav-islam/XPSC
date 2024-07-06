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
        int a, b;
        cin >> a >> b;
        if (a == 1)
            cout << b * b << endl;
        else if (b % 2 == 0)
            cout << 2 * b << endl;
        else
            cout << a * b << endl;
    }
    return 0;
}