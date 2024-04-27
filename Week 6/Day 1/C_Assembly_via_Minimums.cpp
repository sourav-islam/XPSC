#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a_size;
        cin >> a_size;
        int b_size = (a_size * (a_size - 1)) / 2;
        int ar[b_size];
        for (int &x : ar)
            cin >> x;
        sort(ar, ar + b_size);
        int inc = 1;
        vector<int> v;
        for (int i = 0; i < b_size; i += (a_size - (inc++)))
        {
            v.push_back(ar[i]);
        }
        v.push_back(1e9);

        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}