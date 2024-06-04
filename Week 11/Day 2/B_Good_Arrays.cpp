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
        vector<int> v(n);
        int sum = 0, total_one = 0;
        for (int &x : v)
        {
            cin >> x;
            sum += x;
            if (x == 1)
                total_one++;
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (sum - n >= total_one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}