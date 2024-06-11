#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int max1 = 0, max2 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> v(ar, ar + n);
            v[i] = 1;
            for (int j = 0; j < v.size() - 1; j++)
            {
                sum += abs(v[j] - v[j + 1]);
            }
            max1 = max(max1, sum);
            sum = 0;
            v.clear();
        }
        for (int i = 0; i < n; i++)
        {
            vector<int> v(ar, ar + n);
            v[i] = k;
            for (int j = 0; j < v.size() - 1; j++)
            {
                sum += abs(v[j] - v[j + 1]);
            }
            max2 = max(max2, sum);
            sum = 0;
            v.clear();
        }
        cout << max(max1, max2) << endl;
    }
    return 0;
}