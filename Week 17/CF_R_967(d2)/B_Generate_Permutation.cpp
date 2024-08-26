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
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        if (n == 2)
        {
            cout << -1 << "\n";
            continue;
        }
        if (n % 2 == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << " ";
                }
            }
            for (int i = n; i > 0; i--)
            {
                if (i % 2 == 1)
                {
                    cout << i << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}