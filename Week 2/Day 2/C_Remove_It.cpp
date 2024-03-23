#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> v;
    while (n--)
    {
        int a;
        cin >> a;
        if (a != x)
            v.push_back(a);
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}