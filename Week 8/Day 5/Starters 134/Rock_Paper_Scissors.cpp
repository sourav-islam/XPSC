#include <iostream>
#include <algorithm>

using namespace std;

int max_games_won(string A)
{
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == A[i + 1])
        {
            cnt++;
            i++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string A;
        cin >> A;
        cout << n - max_games_won(A) << endl;
    }
    return 0;
}
