#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char arr[] = {'a', 'e', 'i', 'o', 'u'};

        int ori = n/5;
        int dup = n%5;

        string s = "";
        
        for(int i = 0; i<5; i++) {
            for(int j = 0; j<ori; j++) {
                s.push_back(arr[i]);
            }
            if(dup > 0) {
                s.push_back(arr[i]);
                dup--;
            }

        }
        cout << s << endl;
    }

    return 0;
}