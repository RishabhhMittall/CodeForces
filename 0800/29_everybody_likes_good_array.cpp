#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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

        int ops = 0;

        for (int i = 0; i < n - 1; i++) {
            if((arr[i] %2 == 1 && arr[i+1] % 2 == 1) || 
                    arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {
                        ops++;
            }
        }
        cout<< ops << endl;
    }

    return 0;
}