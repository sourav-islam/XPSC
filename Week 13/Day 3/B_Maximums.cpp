#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n), a(n);
    for (int &x : v)
        cin >> x;
    a[0] = v[0];
    int sum, mx = a[0];
    for (int i = 1; i < n; i++)
    {
        sum = mx + v[i];
        a[i] = sum;
        mx = max(mx, sum);
    }
    for (int val : a)
        cout << val << " ";
    cout << endl;
    return 0;
}