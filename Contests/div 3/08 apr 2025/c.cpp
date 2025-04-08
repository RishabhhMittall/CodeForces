#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x, k;
        cin >> x >> k;

        if (k == 1) {
            if (is_prime(x)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (x == 1) {
                if (k == 2) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}