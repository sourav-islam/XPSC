#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"
const int N = 100 + 5;
vector<vector<int>> a(N, vector<int>(N, 0));

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
ll n, m;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int mx = 0;
                for (int k = 0; k < 4; k++)
                {
                    int x_idx = i + dx[k], y_idx = j + dy[k];
                    if (valid(x_idx, y_idx))
                    {
                        mx = max(mx, a[x_idx][y_idx]);
                    }
                }
                a[i][j] = min(mx, a[i][j]);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}