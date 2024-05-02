#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int maxi = 0, ans;
        int y;
        for (int i = 1; i < x; i++)
        {
            ans = maxi;
            maxi = max(maxi, gcd(x, i) + i);
            if (maxi > ans)
            {
                y = i;
            }
        }
        cout << y << "\n";
    }
    return 0;
}
