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
    if (n % 2 == 0)
    {
        cout << n / 2 << '\n';
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {

        int x = n - 3;
        cout << x / 2 + 1 << '\n';
        for (int i = 0; i < x / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
    return 0;
}