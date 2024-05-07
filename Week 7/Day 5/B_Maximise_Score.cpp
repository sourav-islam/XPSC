#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int maxi = 0;
            if (i + 1 < n)
            {
                maxi = max(maxi, abs(v[i] - v[i + 1]));
            }
            if (i - 1 >= 0)
            {
                maxi = max(maxi, abs(v[i] - v[i - 1]));
            }

            ans = min(ans, maxi);
        }
        cout << ans << endl;
    }
}
