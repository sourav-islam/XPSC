#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void sv_code()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 1 << " " << 3;
        for (int i = 1; i <= n - 2; i++)
            cout << " " << 2;
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        sv_code();
    }
    return 0;
}