#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }
        
        vector<int> cnt(n+1 , 0);

        for(int i = 0; i<n; i++) {
            cnt[arr[i]]++;
        }

        vector<int> sec(n+1, 0);
        for(int i = 1; i<=n; i++) {
            int curr = cnt [i];
            if(curr % k != 0) {
                cout << 0 << endl;
                return;
            }
            sec[i] = curr/k;
        }



    }

    return 0;
}