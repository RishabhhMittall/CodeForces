#include <iostream>
using namespace std;

void solve() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    
    if (p == n) {
        if (m == q) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }
    
    int k = n / p;
    int r = n % p;
    
    if (r == 0) {
        if (m == k * q) {
            cout << "YES" << endl;;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}