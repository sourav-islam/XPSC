#include <bits/stdc++.h>
using namespace std;
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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << (n / 2) * (2 * 6) + (n / 2) * (1) << endl;
        }
        else
            cout << (n / 2) * (2 * 6) + (n / 2) * (1) + 6 << endl;
    }
    return 0;
}