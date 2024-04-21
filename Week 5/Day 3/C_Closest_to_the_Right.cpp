#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    while (k--)
    {
        int val;
        cin >> val;

        int l = 0, r = n - 1, ans = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] >= val)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans + 1 << endl;
    }

    return 0;
}
