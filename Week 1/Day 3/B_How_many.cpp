#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++) // can optimize, a+b <= s
        {
            for (int c = 0; c <= s; c++) // a+b+c <= s then check only if(a*b*c)<= t ki na?
            {
                if ((a + b + c) <= s && (a * b * c) <= t)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}