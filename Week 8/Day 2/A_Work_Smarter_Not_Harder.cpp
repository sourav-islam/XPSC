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
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        int a = ceil((l * 1.0) / v1);
        int b = ceil((l * 1.0) / v2);
        cout << a - b - 1 << endl;
    }
    return 0;
}