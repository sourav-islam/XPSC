#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'A']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 != 0)
            count++;
    }
    if (count > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        vector<char> v1, v2;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] % 2 != 0)
            {
                while (cnt[i]--)
                    v1.push_back(i + 'A');
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0 && cnt[i] % 2 == 0)
            {
                int half = cnt[i] / 2;
                while (half--)
                    v2.push_back(i + 'A');
            }
        }

        for (char x : v2)
            cout << x;
        for (char y : v1)
            cout << y;
        reverse(v2.begin(), v2.end());
        for (char x : v2)
            cout << x;
    }
    return 0;
}