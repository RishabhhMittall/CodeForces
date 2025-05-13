#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
 
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
 
    ll x = abs(arr[0]);
 
    int s = 0, l = 0;
 
    for(int i = 1; i<n; i++) {
        ll y = abs(arr[i]);
 
        if(y<x) {
            s++;
        }
        else if(y > x) {
            l++;
        }
    }
 
    int k = (n+1) / 2;
    int w = k - 1;
    if(s <= w || l>= w) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
 
    }
 
 
}
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 