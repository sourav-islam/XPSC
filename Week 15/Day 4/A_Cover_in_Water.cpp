#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void slv()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int consecutive_empty = 0, total_empty = 0;
    for (auto c : s)
    {
        if (c == '.')
        {
            consecutive_empty++;
            if (consecutive_empty == 3)
            {
                cout << 2 << '\n';
                return;
            }
            total_empty++;
        }
        else
            consecutive_empty = 0;
    }
    cout << total_empty << '\n';
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        slv();
    }
    return 0;
}