#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a , int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        int ans = 0;
        for(int i = 0;i<n; i++){
            ans = gcd(abs(i + 1 - arr[i]), ans);
        }
        cout << ans << endl;
    }


    return 0;
}