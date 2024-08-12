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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        if (a + c <= b)
        {
            if (a + c >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (n <= b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}