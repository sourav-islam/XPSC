/* #include <bits/stdc++.h>
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
    ing s;
        cin >> s;

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            vector<int> v;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    while (s[i] == '1')
                    {
                        cnt++;
                    }
                    v.push_back(cnt);
                }
                i += cnt - 1;
                cnt = 0;
            }
            cout << v.size() << endl;
        }

        else
            cout << 0 << endl;
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                count++;
        }
        cout << (count + 1) / 2 << endl;
    }
    return 0;
}
