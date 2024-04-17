/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int rem, remb, reversed_a = 0, reversed_b = 0;

        int x = a, y = b;
        while (x != 0)
        {
            rem = x % 10;
            reversed_a = (reversed_a * 10) + rem;
            x /= 10;
        }

        while (y != 0)
        {
            remb = y % 10;
            reversed_b = reversed_b * 10 + remb;
            y /= 10;
        }
        // cout << a << " " << reversed_a << " " << b << endl;
        if (reversed_a > b)
            cout << "Yes" << endl;
        else if (reversed_a > reversed_b)
            cout << "Yes" << endl;
        else if (a > reversed_b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int reversed_a = 0, reversed_b = 0;

        int x = a, y = b;
        while (x != 0)
        {
            int rem = x % 10;
            reversed_a = (reversed_a * 10) + rem;
            x /= 10;
        }

        while (y != 0)
        {
            int remb = y % 10;
            reversed_b = reversed_b * 10 + remb;
            y /= 10;
        }

        if (reversed_a > b || reversed_a > reversed_b || a > reversed_b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
