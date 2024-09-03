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
        vector<int> a(16);
        for (int i = 0; i < 16; i++)
        {
            cin >> a[i];
        }
        int small_nums = 0;
        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                if (a[i] > a[j])
                    small_nums++;
            }
            cout << log2(small_nums) << " ";
        }
    }
    return 0;
}