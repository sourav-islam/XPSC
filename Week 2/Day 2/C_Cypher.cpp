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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // cin.ignore();
            int ans = v[i];
            for (int j = 0; j < x; j++)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    if (ans == 9)
                        ans = 0;
                    else
                        ans++;
                }
                else
                {
                    if (ans == 0)
                        ans = 9;
                    else
                        ans--;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}