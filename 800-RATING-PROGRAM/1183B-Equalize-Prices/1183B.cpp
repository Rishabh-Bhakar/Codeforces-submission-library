#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int mn = arr[0];
        int mx = arr[0];

        // Find smallest and largest
        for (int i = 1; i < n; i++) {
            if (arr[i] < mn) {
                mn = arr[i];
            }

            if (arr[i] > mx) {
                mx = arr[i];
            }
        }

        if (mx - mn > 2 * k) {
            cout << -1 << endl;
        }
        else {
            cout << mn + k << endl;
        }
    }

    return 0;
}