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
        int x;
        cin >> x;
        if (x <= 1399)
            cout << "Division 4"
                 << "\n";
        else if (x >= 1400 && x <= 1599)
            cout << "Division 3"
                 << "\n";
        else if (x >= 1600 && x <= 1899)
            cout << "Division 2"
                 << "\n";
        else
            cout << "Division 1"
                 << "\n";
    }
    return 0;
}