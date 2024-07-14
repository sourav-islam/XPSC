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
    char c;
    while (t--)
    {
        int ans = 0;
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    if (i == 1 || j == 1 || i == 10 || j == 10)
                        ans += 1;
                    else if (i == 2 || j == 2 || i == 9 || j == 9)
                        ans += 2;
                    else if (i == 3 || j == 3 || i == 8 || j == 8)
                        ans += 3;
                    else if (i == 4 || j == 4 || i == 7 || j == 7)
                        ans += 4;
                    else
                        ans += 5;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}