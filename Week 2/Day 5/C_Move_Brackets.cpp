#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (!st.empty())
            {
                if (c == ')' && st.top() == '(')
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        cout << st.size() / 2 << endl;
    }
    return 0;
}