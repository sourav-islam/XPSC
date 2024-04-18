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
        int Xor = 0, index;
        for (int i = 31; i >= 0; i--)
        {
            // cout << (n & (1 << i));
            if (n & (1 << i))
            {
                cout << ((1 << i) - 1) << "\n";
                break;
            }
                }
    }
    return 0;
}
