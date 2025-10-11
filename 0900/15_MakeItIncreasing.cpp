#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ops = 0;
        bool impossible = false;

        for(int i = n-2; i >= 0; i--) {
            if(a[i] >= a[i+1]) {
                while(a[i] >= a[i+1] && a[i] > 0) {
                    a[i] /= 2;
                    ops++;
                }
                if(a[i] >= a[i+1]) {
                    impossible = true;
                    break;
                }
            }
        }

        if(impossible) cout << -1 << endl;
        else cout << ops << endl;
    }

    return 0;
}
