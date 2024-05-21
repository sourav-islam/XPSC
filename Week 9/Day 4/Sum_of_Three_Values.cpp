#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    vector<pair<int, int>> bag;
    for (int i = 0; i < n; i++)
    {
        // bag[i] = {v[i], i + 1};
        bag.push_back({v[i], i + 1});
    }
    sort(bag.begin(), bag.end());
    for (int i = 0; i < n; i++)
    {
        int fixed = bag[i].first;
        int l = i + 1, r = n - 1;
        int sum;
        while (l < r)
        {
            sum = fixed + bag[l].first + bag[r].first;
            if (sum == x)
            {
                cout << bag[i].second << " " << bag[l].second << " " << bag[r].second << '\n';
                return 0;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}
