#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (abs(k) > n * p) {
            cout << -1 << endl;
        } else if (k == 0) {
            cout << 0 << endl;
        } else {
            int moves = abs(k) /p;
            if (abs(k) %p != 0) {
                moves++;
            }
            
            cout << moves << endl;
        }
    }
    return 0;
}
