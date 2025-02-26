#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string st;
        cin >> st;
        long long f = 0, s = 0;
        for (long long i = 0; i < st.size(); i++) {
            if (st[i] == '-') {
                f++;
            } else {
                s++;
            }
        }

        long long x = 0, y = 0;

        if (f < 2 || s < 1) {
            cout << 0 << endl;
            continue;
        }

        if (f % 2 == 1) {
            x = f / 2 + 1;
            y = f / 2;
        } else {
            x = f / 2;
            y = x;
        }

        long long prod = y * s * x;

        cout << prod << endl;
    }

    return 0;
}