#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;

        int maxi = 1, cnt = 1;
        for(int i = 0; i<n; i++) {
            if(s[i] == s[i-1]) {
                cnt ++;
            }
            else {
                cnt = 1;
            }
            maxi = max(maxi , cnt);
        }

        cout << maxi + 1 << endl;
    }

    return 0;
}