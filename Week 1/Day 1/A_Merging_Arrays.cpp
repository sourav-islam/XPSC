#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a)
        cin >> x;
    for (int &y : b)
        cin >> y;
    int l = 0, r = 0;
    vector<int> v(n + m);
    int k = 0;
    while (l < n || r < m)
    {
        if (r == b.size() || l < a.size() && a[l] < b[r])
        {
            v[k++] = a[l++];
        }
        else
            v[k++] = b[r++];
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}