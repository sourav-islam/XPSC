#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int k;
    cin >> k;

    sort(a.begin(), a.end());

    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;

        int count = upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);
        cout << count << " ";
    }

    return 0;
}
