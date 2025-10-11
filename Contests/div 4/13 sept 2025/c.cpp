#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {
        // int n;
        // cin >> n;

        // vector<int> arr(n);

        int n,m;
        cin >> n >> m;

        vector<int> a(n + 1);
        vector<int> b(n + 1);

        a[0] = 0 , b[0] = 0;
        
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
        }

        int ans = 0;

        for(int i = 1; i<=n; i++) {
            int p = a[i] - a[i-1];

            int side;
            if(b[i] != b[i - 1]) {
                side = 1;
            }
            else {
                side = 0;
            }

            if(p % 2 != side) {
                int diff = max(0, p - 1); 
                ans += diff;
            }
            else {
                ans += p;
            }
        }

        int last = m - a[n];
        ans += last;

        cout << ans << endl;
    }

    return 0;
}