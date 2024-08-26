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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> evenIdx, oddIdx;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenIdx.push_back(i + 1);
            else
                oddIdx.push_back(i + 1);
        }

        if (evenIdx.size() >= 2 && oddIdx.size() > 0)
        {
            cout << "YES" << "\n";
            cout << evenIdx[0] << " " << evenIdx[1] << " " << oddIdx[0] << "\n";
        }
        else if (oddIdx.size() >= 3)
        {
            cout << "YES" << "\n";
            cout << oddIdx[0] << " " << oddIdx[1] << " " << oddIdx[2] << "\n";
        }
        else
            cout << "NO" << "\n";
        // evenIdx.clear();
        // oddIdx.clear();
    }
    return 0;
}