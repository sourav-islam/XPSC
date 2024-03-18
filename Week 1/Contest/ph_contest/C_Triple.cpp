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
        int a[n + 1];
        int ar[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ar[a[i]]++;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (ar[a[i]] >= 3)
            {
                cout << a[i] << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << -1 << endl;
    }
    return 0;
}