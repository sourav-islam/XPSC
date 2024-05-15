#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    while (Q--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        for (int op = 0; op < M; ++op)
        {
            int i, j, k;
            cin >> i >> j >> k;
            A.push_back(A[i - 1] + A[j - 1] - A[k - 1]);
        }

        for (int i = 0; i < N; ++i)
        {
            cout << A[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
