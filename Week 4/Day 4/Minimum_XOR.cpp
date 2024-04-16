#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a)
        {
            cin >> x;
        }
        int Xor = a[0];
        for (int i = 1; i < n; i++)
        {
            Xor = Xor ^ a[i];
        }
        int ans = Xor;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, Xor ^ a[i]);
        }
        cout << ans << endl;
    }
}
