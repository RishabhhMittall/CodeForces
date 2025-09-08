#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int k, x;
        cin >> k >> x;

        for(int i = 0; i<k; i++) {
            if(x%2 == 0) {
                x = x*2;
            }
            else {
                if((x-1)%3 == 0) {
                    int temp = (x-1)/3;
                    if(temp > 0 && temp %2 ==1) {
                        x = temp;
                    }
                    else {
                        x*=2;
                    }
                }
                else {
                    x*=2;
                }
            }
        }
        cout << x << endl;
    }



    return 0;
}