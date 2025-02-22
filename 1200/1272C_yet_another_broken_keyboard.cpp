#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> str(26);
    for (int i = 0; i < k; i++) {
        char ch;
        cin >> ch;
        str[ch - 'a']++;
    }

    long long l = 0, r = 0;
    long long ans = 0;
    while (r < n) {
        if (str[s[r] - 'a'] == 0) {
            ans += ((r - l) * (r - l + 1)) / 2;
            r++;
            l = r;
        } else {
            r++;
        }
    }
    ans += ((r - l) * (r - l + 1)) / 2;

    cout << ans << endl;

    return 0;
}