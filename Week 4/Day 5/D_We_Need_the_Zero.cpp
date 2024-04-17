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
        vector<int> a(n);
        int Xor = 0;
        for (int &x : a)
        {
            cin >> x;
            Xor ^= x;
        }
        if (Xor == 0)
            cout << 0 << endl;
        else
        {
            if (n % 2 == 1)
                cout << Xor << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}