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
            if (a <= sqr)
                cout << 1 << "\n";
            else if (b <= sqr)
                cout << 1 << "\n";
            else
                cout << 2 << "\n";
        }
    }
    return 0;
}