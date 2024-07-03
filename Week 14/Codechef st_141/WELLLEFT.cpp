#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K, H;
        cin >> N >> K >> H;
        long long A = 1, B = 1, temp = 0;
        while (A <= N) {
            if (A < H) {
                if (A * K - B * (K - 1) >= H) {
                    while (A * K - B * (K - 1) >= H) {
                        B++;
                    }
                    temp += B - 1;
                } else {
                    A++;
                }
            } else {
                temp += N;
                A++;
            }
        }

        cout << temp << endl;
    }
    return 0;
}