#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        map<char , int> mp;
        for(auto ch : s) {
            mp[ch]++;
        }

        int odds = 0;
        for(auto it: mp) {
            int freq = it.second;

            if(freq % 2 != 0) {
                odds ++;
            }
        }

        if(k < odds -1) cout << "NO" << endl;
        else cout << "YES" <<endl;


    }
    return 0;
}