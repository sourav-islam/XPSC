#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, p, q, ans = 0;
    cin >> n >> a >> b >> p >> q;

    // chocolates for red
    ans += (n / a) * p;
    // chocolates for blue
    ans += (n / b) * q;
    // common divisors of a and b is lcm(a, b)
    int common = n / lcm(a, b);
    // remove (common * min(p,q))
    ans -= (common * min(p, q));

    cout << ans << '\n';
    return 0;
}
