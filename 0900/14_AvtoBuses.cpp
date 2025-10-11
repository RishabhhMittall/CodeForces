#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {
        ll n ;
        cin >> n;


        ll mini = -1 ,maxi = -1;

        if(n < 4 || n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        else {
            maxi = n/4;
            mini = (n+5)/6;
        }

        if(maxi == -1 && mini == -1) {
            cout << -1 << endl;
        }
        else {
            if(mini == -1) mini = maxi;
            if(maxi == -1) maxi = mini;
            cout << mini << " " << maxi << endl;

        }


    }

    return 0;
}