#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;


    while(t--) {    
        ll n, k;
        cin >> n >> k;

        vector<ll> arr1(n), arr2(n);

        for(ll i = 0; i<n; i++) {
            cin >> arr1[i];
        }
        for(ll i = 0; i<n; i++) {

            cin >> arr2[i];
        }
        for(ll i = 0; i<n; i++) {
            arr1[i] %= k;
            arr2[i] %= k;
        }

        unordered_map<ll,ll> freq1, freq2;

        for(ll i = 0; i<n; i++) {
            freq1[arr1[i]]++;
            freq2[arr2[i]]++;
        }

        if(freq1 == freq2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }   

    }
    return 0;
}