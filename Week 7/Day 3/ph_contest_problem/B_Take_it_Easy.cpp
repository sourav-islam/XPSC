#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        int totalCandies = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            totalCandies += v[i];
        }
        if (totalCandies % n != 0)
        {
            cout << "No" << endl;
            continue;
        }
        int avgCandies = totalCandies / n;
        int flag = 1;
        for (int i = 0; i < n; ++i)
        {
            int difference = avgCandies - v[i];
            if (difference % 2 != 0)
            {
                flag = 0;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
