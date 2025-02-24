#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> tools(n);

        for (int i = 0; i < n; i++) {
            cin >> tools[i];
        }

        long long ans = b;

        for(int i = 0; i<n; i++) {
            ans += min(1+tools[i], a) - 1;
            // ans += min(tools[i], a - 1);
        }

        cout << ans << endl;
        
        }
    return 0;
}