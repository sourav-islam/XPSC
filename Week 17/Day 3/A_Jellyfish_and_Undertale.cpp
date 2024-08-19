#include <bits/stdc++.h>
using namespace std;
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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int sum = 0;
        if (b > a)
        {
            sum = a;
        }
        else
            sum = b;
        for (int x : v)
        {
            if (x + 1 > a)
            {
                sum += a - 1;
            }
            else
                sum += x;
        }
        pp(sum);
    }
    return 0;
}
