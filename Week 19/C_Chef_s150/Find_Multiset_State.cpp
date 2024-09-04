#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n >> k;

        deque<int> a(n);
        for (int &i : a)
            cin >> i;

        for (int i = 0; i < k; i++)
        {
            int sum = a.front() + a.back();
            a.pop_front();  // Pop from front
            a.back() = sum; // Update the last element
        }

        for (int i : a)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}