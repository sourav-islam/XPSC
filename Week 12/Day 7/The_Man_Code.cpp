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
        int n;
        cin >> n;
        /* if(n % 2 == 0) cout << n/2 << " " << n/2 << endl;
        else cout << n/2+1 << " " << n/2 << endl; */
        cout << ceil(1.0 * n / 2) << " " << ceil(1.0 * n / 3) << endl;
    }
    return 0;
}