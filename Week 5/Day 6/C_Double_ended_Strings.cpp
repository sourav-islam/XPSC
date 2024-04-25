#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        /* int long_substring = 0;
        int cnt = 0; */

        int LCSuff[n + 1][m + 1];
        int result = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {

                if (i == 0 || j == 0)
                    LCSuff[i][j] = 0;

                else if (a[i - 1] == b[j - 1])
                {
                    LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                    result = max(result, LCSuff[i][j]);
                }
                else
                    LCSuff[i][j] = 0;
            }
        }
        cout << (n - result) + (m - result) << endl;
        // cout << result << endl;
    }
    return 0;
}