#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        if (n == 1)
            cout << 0 << '\n';
        else
            cout << v.back() - v.front() << '\n';
    }
    return 0;
}