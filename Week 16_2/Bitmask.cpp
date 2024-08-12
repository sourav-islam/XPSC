#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Binary repre..
            // if ((i >> j) & 1)
            //     cout << 1 << " ";
            // else
            //     cout << 0 << " ";
            // Decimal Repre..
            if ((i >> j) & 1)
                cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}