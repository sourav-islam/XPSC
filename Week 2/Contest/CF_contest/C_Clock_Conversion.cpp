#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;
        cout << a << c << b << endl;
    }

    return 0;
}

/* #include <bits/stdc++.h>

using namespace std;

void solve() {
    int h, m; char c;
    cin >> h >> c >> m;
    string am = (h < 12 ? " AM" : " PM");
    h = (h % 12 ? h % 12 : 12);
    cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << am << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
} */