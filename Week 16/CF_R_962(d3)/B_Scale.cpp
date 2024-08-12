#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
string grid[1010];
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> grid[i];
        //  vector<vector<char>> grid(n, vector<char>(n));
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin >> grid[i][j];
        //     }
        // }

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}