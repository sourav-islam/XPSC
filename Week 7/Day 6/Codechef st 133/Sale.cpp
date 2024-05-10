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
        int ar[n];
        for (int &x : ar)
            cin >> x;
        int max_sale = 0, sum_1to_i = 0;
        for (int i = 0; i < n; i++)
        {
            max_sale = max(max_sale, sum_1to_i + ar[i] * 2);
            sum_1to_i += ar[i];
        }
        cout << max_sale << endl;
    }
    return 0;
}