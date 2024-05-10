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
        vector<int> ar(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }
        int min_swap = 0;
        for (int i = 1; i < n; i++)
        {
            if ((ar[i] == i) && (ar[i + 1] == i + 1))
            {
                min_swap++;
                swap(ar[i], ar[i + 1]);
                i += 2;
            }
            else
                i++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (ar[i] == i)
            {
                min_swap++;
            }
        }
        cout << min_swap << endl;
    }
    return 0;
}