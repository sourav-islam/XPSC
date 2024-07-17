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
        if (n <= 2)
        {
            cout << n << endl;
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << n - 1 << endl;
            for (int i = n - 1; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}