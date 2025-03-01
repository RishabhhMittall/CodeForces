#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long low = (k*(k+1)) / 2;
        long long high = (n*(n+1) / 2) - ((n-k)*(n-k+1)/2);

        if(x >= low && x <= high) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;

        }
    }
    return 0;
}