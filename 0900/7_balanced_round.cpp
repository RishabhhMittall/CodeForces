#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while(t --) {
        ll n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0;
        int temp = 1;

        for(int i = 1; i<n; i++) {
            if(arr[i] - arr[i-1] > k) {
                ans = max(ans , temp);
                temp = 1; 
            }
            else {
                temp ++;
            }
        }
        ans = max(ans, temp);
        cout << n - ans << endl;
    }
    return 0;
}