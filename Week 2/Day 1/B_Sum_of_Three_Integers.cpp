#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;
    int x, y, z;
    int ctn = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            x = s - (i + j);
            if (x >= 0 && x <= k)
                ctn++;
        }
    }
    cout << ctn;
    return 0;
}