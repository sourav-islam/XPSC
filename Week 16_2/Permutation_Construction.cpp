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
        if (n == 1)
            cout << 1 << endl;
        else if (n % 2 == 0)
        {
            int org = n;
            for (int i = 1; i <= (org / 2); i++)
            {
                cout << i << " ";
                cout << n << " ";
                n--;
            }
        }
        else
        {
            int org = n;
            vector<int> v;
            n--;
            for (int i = 1; i <= org / 2; i++)
            {
                v.push_back(i);
                v.push_back(n);
                n--;
            }
            v.push_back(org);
            swap(v[v.size() - 2], v[v.size() - 3]);
            swap(v[v.size() - 1], v[v.size() - 2]);

            for (int i : v)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}