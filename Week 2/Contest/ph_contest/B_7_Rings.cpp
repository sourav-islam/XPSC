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
        int n, x;
        cin >> n >> x;
        int mul = n * x;
        int ctn = 0;
        while (mul > 0)
        {
            ctn++;
            mul /= 10;
        }
        if (ctn == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}