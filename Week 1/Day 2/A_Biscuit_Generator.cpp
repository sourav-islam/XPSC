#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;
    if (t < a)
        cout << 0 << endl;
    else
    {
        cout << (t / a) * b << endl;
    }
    return 0;
}