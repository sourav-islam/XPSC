#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int count_valid_operations(const vector<int> &A)
{
    int N = A.size();

    // Initialize variables for the sliding window
    int count_1_win = 0, count_2_win = 0, count_3_win = 0;
    int L = 0, valid_operations = 0;

    // Iterate over R (right end of the window)
    for (int R = 0; R < N; ++R)
    {
        // Update the count for the current element A[R]
        if (A[R] == 1)
            count_1_win++;
        else if (A[R] == 2)
            count_2_win++;
        else if (A[R] == 3)
            count_3_win++;

        // Shrink the window from the left (L) until it's invalid
        while (count_1_win > 0 && count_2_win > 0 && count_3_win > 0)
        {
            // Count all valid subarrays ending at R
            valid_operations += N - R;

            // Shrink the window by moving L to the right
            if (A[L] == 1)
                count_1_win--;
            else if (A[L] == 2)
                count_2_win--;
            else if (A[L] == 3)
                count_3_win--;
            L++;
        }
    }

    return valid_operations;
}
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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        cout << count_valid_operations(a) << endl;
    }
    return 0;
}