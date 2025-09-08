#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {

        ll n;
        cin >> n;

        vector<int> arr(n);


            for(int i = 0; i<n; i++) {
                if(i % 2 == 0) {
                    arr[i] = -1;
                } 
                else {
                    arr[i] = 3;
                }
            }

            if(n % 2 == 0) {
                arr[n-1] = 2;
            }
            for(int i = 0; i<n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
    }

    return 0;
}