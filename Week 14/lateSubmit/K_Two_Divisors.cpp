#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
            cout << b * b << endl;
        else if (b % a == 0)
            cout << (b / a) * b << endl;
        else
        {
            int lcm = (a / gcd(a, b)) * b;
            cout << lcm << endl;
        }
    }
    return 0;
}