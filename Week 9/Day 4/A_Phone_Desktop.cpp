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
        int x, y;
        cin >> x >> y;

        /* if (x <= 7 && (4 * y) <= 8)
            cout << 1 << endl;
        else if (x == 0 && y != 0)
            cout << ceil((y * 4) / 8) << endl;
        else if (x == 0 && y == 0)
            cout << 0 << endl;
        else if (x != 0 && y == 0)
            cout << ceil(x / 15) << endl;
        else
        {
            int a = ceil((y * 4) / 8);
            int rem = a * 7;
            cout << a + (x / rem) << endl;
        } */
        int total_cells = x + 4 * y;

        int screens_needed = (total_cells + 14) / 15;

        if (x == 0 && y != 0)
        {

            screens_needed = ceil(1.0 * (4 * y) / 8);
        }
        else if (x == 0 && y == 0)
        {

            screens_needed = 0;
        }

        cout << screens_needed << endl;
    }
    return 0;
}