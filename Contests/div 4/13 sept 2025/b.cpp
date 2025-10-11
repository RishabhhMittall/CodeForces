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
        
        int x, y, n , m;
        
        cin >> n >> m >> x >> y;
        
        vector<int> h(n);
        vector<int> v(m);
        

        for(int i = 0; i<n; i++) {
            cin >> h[i];
        }
        for(int i = 0; i<m; i++) {
            cin >> v[i];
        }

        int ans = 0;

        for(int i = 0; i<n; i++) {
            if(h[i] < y && h[i] > 0) {
                ans++;
            }
        }
        for(int i = 0; i<m; i++) {
            if(v[i] < x && v[i] > 0) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}