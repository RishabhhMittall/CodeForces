#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n % 2 == 0) {   // even
            cout << 2 << endl;
            // xor and replace all with same ele
            cout << 1 << " " <<n << endl;
            // xor for all same ele is 0
            cout << 1 << " " << n << endl;
        }
        else {  // odd
            cout << 4 << endl;
            // xor and make first n -1 ele same
            cout << 1 << " " << n - 1 << endl;
            // xor and make them 0
            cout << 1 << " " << n - 1 << endl;
            // xor the last two ele and make them same
            cout << n - 1 << " "<< n << endl;
            // xor the last two same ele and make them zero
            cout << n - 1 << " " << n << endl;

        }
    }
    return 0;
}