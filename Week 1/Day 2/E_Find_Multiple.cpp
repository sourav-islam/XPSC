#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    int ans, i = 1;
    while (c * i <= b)
    {
        if (c * i >= a && c * i <= b)
        {
            flag = true;
            ans = c * i;
            break;
        }
        i++;
    }
    if (flag)
        cout << ans << endl;
    else
        cout << -1 << endl;
    return 0;
}