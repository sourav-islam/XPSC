#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        v[x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}