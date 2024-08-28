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
        vector<int> a(n), b(n, 0);
        // vector<bool> b(n);
        for (int &x : a)
            cin >> x;
        reverse(a.begin(), a.end());
        int tmp = a[0];
        for (int i = 0; i < n; i++)
        {
            if (tmp != 0 || a[i] != 0)
            {
                b[i] = 1;
                tmp = max(tmp, a[i]);
                tmp--;
            }
            else
            {
                tmp = a[i];
                // b[i] = 0;
            }
        }
        for (int i = n - 1; i >= 0; i--)
            cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}