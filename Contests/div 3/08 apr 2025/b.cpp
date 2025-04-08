#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// int sum(const string &s) {
//     int sum = 0;
//     int n = s.length();
//     for(int i = 0; i<n; i++) {
//         sum += s[i] - '0';
//     }
// }

int main() {

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int n = s.length();
        int cnt = 0;

        int i = n-1;
        bool flag = false;

        while(i >= 0 && s[i] == '0') {
            cnt++;
            i--;
        }


        if(i >= 0) {
            i--;
        }


        while(i >= 0) {
            if(s[i] != '0') {
                cnt++;
            }
            i--;
        }

        cout << cnt << endl;


    }

    return 0;
}