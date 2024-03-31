#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[205][205];

int dw_left(int i, int j)
{
    int z = 0;
    while (i < n && j >= 0)
    {
        z += a[i][j];
        i++, j--;
    }
    return z;
}
int up_right(int i, int j)
{
    int y = 0;
    while (i >= 0 && j < m)
    {
        y += a[i][j];
        i--, j++;
    }
    return y;
}
int dw_right(int i, int j)
{
    int x = 0;
    while (i < n && j < m)
    {
        x += a[i][j];
        i++, j++;
    }
    return x;
}
int up_left(int i, int j)
{
    int val = 0;
    while (i >= 0 && j >= 0)
    {
        val += a[i][j];
        i--, j--;
    }

    return val;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        /* for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        } */

        int ans = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = a[i][j] + up_left(i - 1, j - 1) + dw_right(i + 1, j + 1) + up_right(i - 1, j + 1) + dw_left(i + 1, j - 1);
                ans = max(ans, mx);
            }
        }
        cout << ans << endl;
    }
    return 0;
}