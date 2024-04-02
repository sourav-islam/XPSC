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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a * b) <= (c * 24 * 60))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}