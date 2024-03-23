#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s = "imrTu";
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        sort(s.begin(), s.end());
        sort(str.begin(), str.end());

        if (str == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}