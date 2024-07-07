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
        int n;
        cin >> n;
        int sum;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
        }
        for (int k = 1; k <= n; k++)
        {
            sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if (v[i] % k == 0)
                    sum += v[i];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}