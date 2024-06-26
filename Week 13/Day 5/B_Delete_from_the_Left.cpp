#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int common = 0;
    while (true)
    {
        if (i >= 0 && j >= 0 && s1[i] == s2[j])
        {
            common++;
            i--, j--;
        }
        else
            break;
    }
    cout << s1.size() + s2.size() - 2 * common;
    return 0;
}