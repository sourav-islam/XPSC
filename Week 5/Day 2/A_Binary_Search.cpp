#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int src;
        cin >> src;
        int s = 0, e = n - 1;
        int ans = -1;
        while (s <= e)
        {
            int mid = (s + e) / 2; //  mid = s + (e-s)/2;
            if (v[mid] == src)
            {
                ans = mid;
                break;
            }
            else if (v[mid] < src)
            {
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        if (ans != -1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}