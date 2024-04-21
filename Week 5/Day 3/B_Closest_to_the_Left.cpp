/* #include <bits/stdc++.h>
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
        if (val <= v[0] || val > v[n - 1])
            cout << 0 << "\n";
        else
        {
            auto it = lower_bound(v.begin(), v.end(), val);
            if (*it == val)
                cout << it - v.begin() + 1 << "\n";
            else
                cout << it - v.begin() << "\n";
        }
    }
    //  auto it = lower_bound(v.begin(), v.end(), 8);
    //  cout << *(it) << " " << it - v.begin() << "\n";
    return 0;
} */

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

        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] <= val)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + 1 << endl;
    }

    return 0;
}
