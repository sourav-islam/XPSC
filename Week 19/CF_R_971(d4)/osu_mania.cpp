#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
char a[500][500];
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '#')
                    v.push_back(j + 1);
            }
        }

        reverse(v.begin(), v.end());
        for (int i : v)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}