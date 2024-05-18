#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int maxIndexSumCoprime(const vector<int> &arr)
{
    int n = arr.size();
    int max_sum = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (__gcd(arr[i], arr[j]) == 1)
            {
                max_sum = max(max_sum, (i + 1) + (j + 1));
            }
        }
    }

    return max_sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << maxIndexSumCoprime(arr) << endl;
}