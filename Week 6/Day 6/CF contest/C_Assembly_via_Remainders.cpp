#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> x[i];
        vector<int> a(n);
        a[0] = x[0] + 1;
        for (int i = 1; i <= n; i++)
        {
            a[i] = (a[i - 1] * 2) - 1;
        }

        for (int v : a)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}