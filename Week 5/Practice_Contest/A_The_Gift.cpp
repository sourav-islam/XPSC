#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n, m;
    cin >> x >> n >> m;
    if ((x + m) >= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}