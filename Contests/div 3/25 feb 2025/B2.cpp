#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int up = 0, down = 0;
 
        // sort(s.begin(), s.end());
 
        for(int i = 0; i<n; i++) {
            if(s[i] == '_') down ++;
            else up++;
        }
 
        if(up < 2 || down < 1) {
            cout << 0 << endl;
        }
        else {
            long long half = (up/2);
            long long ans = half * down * (up - half);
            cout << ans << endl;
            // cout << up << " " << down << endl;
        }
    }
    return 0;
}