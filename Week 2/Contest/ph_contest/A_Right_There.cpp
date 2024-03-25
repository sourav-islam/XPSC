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
        int n, x;
        cin >> n >> x;
        if (n <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}