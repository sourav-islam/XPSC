#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int r = 0, l = 0, cnt = 0;
    while (r < m)
    {
        while (b[r] > a[l] && l < n)
        {
            cnt++;
            l++;
        }
        cout << cnt << " ";
        r++;
    }

    return 0;
}