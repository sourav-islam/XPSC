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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int Min = INT_MAX;
        for (int i = 1; i <= 100; i++)
        {
            int j = 1;
            int count = 0;
            while (j <= n)
            {
                while (a[j] == i && j <= n)
                    j++;
                if (j > n)
                    break;
                if (a[j] != i)
                {
                    count++;
                    j += k;
                }
            }
            Min = min(count, Min);
        }

        cout << Min << endl;
    }
    return 0;
}