#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int start = 1;

    // If n is odd, handle 1,2,3 first
    if (n % 2 == 1) {
        cout << "1 1 2 1 2 3 1 3 2 2 3 3 ";

        start = 4;
    }

    // Handle numbers in pairs
    for (int i = start; i <= n; i += 2) {
        int a = i;
        int b = i + 1;

        cout << a << " " << b << " "
             << b << " " << a << " "
             << b << " " << a << " "
             << a << " " << b << " ";
    }

    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}