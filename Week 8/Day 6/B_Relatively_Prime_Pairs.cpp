#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    cout << "YES" << endl;
    for (int i = x; i <= y; i += 2)
    {
        cout << i << " " << i + 1 << '\n';
    }
    return 0;
}