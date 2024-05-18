#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

bool prime(int x)
{
    if (x == 1)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (prime(n))
        cout << 1 << '\n';
    else if (n % 2 == 0)
        cout << 2 << '\n';
    else
    {
        if (prime(n - 2))
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
    return 0;
}