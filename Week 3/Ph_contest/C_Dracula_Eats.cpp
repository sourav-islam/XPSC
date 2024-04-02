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
        if (n % 7 >= 2)
            cout << (n / 7) + 1 << endl;
        else
            cout << n / 7 << endl;
    }
    return 0;
}