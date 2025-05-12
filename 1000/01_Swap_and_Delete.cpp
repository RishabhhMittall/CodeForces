#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int zero = 0, one = 0;

        int n = s.length();

        for(int i = 0; i<n; i++) {
            if(s[i] == '0') {
                zero++;
            }
            else {
                one++;
            }
        }

        int i = 0;

        while(i<n) {
            if(s[i] == '0') {
                if(one > 0) one--;
                else break;
            }
            else {
                if(zero > 0) zero--;
                else break;
            }
            i++;
        }

        cout << n - i << endl;
    }

    return 0;
}