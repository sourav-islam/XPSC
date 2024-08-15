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
        vector<int> a(n + 1);
        vector<bool> b(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        b[a[1]] = 1;
        bool ok = true;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] == 1 && b[a[i] + 1] != 1)
            {

                ok = false;
                break;
            }
            else if (a[i] == n && b[a[i] - 1] != 1)
            {

                ok = false;
                break;
            }
            else if (b[a[i] + 1] != 1 && b[a[i] - 1] != 1)
            {
                ok = false;
                break;
            }
            else
                b[a[i]] = 1;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}