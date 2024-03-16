#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    /*  if (n == 0)
     {
         cout << "0000" << endl;
         return 0;
     }
     int d = n;
     int digit = 0;
     while (d > 0)
     {
         digit++;
         d = d / 10;
     }
     if (digit == 1)
         cout << "000" << n << endl;
     else if (digit == 2)
         cout << "00" << n << endl;
     else if (digit == 3)
         cout << "0" << n << endl;
     else
         cout << n << endl; */

    stringstream ss;
    ss << n;
    string s;
    ss >> s;

    if (s.size() == 0)
        cout << "0000" << endl;
    else if (s.size() == 1)
        cout << "000" << s << endl;
    else if (s.size() == 2)
        cout << "00" << s << endl;
    else if (s.size() == 3)
        cout << "0" << s << endl;
    else
        cout << s << endl;

    return 0;
}