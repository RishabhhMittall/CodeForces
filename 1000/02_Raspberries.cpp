#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans = k - 1;

        int even = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) even++;

            if (arr[i] % k == 0)
                ans = 0;
            else
                ans = min(ans, k - (arr[i] % k));
        }

        if (k != 4) {
            cout << ans << endl;
        } else {
            if (even >= 2)
                cout << 0 << endl;
            else if (even == 1)
                cout << min(ans,1) <<endl;
            else 
                cout << min(ans , 2) << endl;    

        }
    }

    return 0;
}