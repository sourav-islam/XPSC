#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        stack<char> st;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                st.push(s[i]);
            else
            {
                if (s[i] != st.top())
                {
                    st.pop();
                    ans++;
                }
                else
                    st.push(s[i]);
            }
        }
        if (ans % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
}
