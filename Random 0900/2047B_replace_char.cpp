#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> arr(26, 0);

        for (char c : s) {
            arr[c - 'a']++;
        }

        int max_val = 0, min_val = INT_MAX;
        char maxi, mini;

        for (int i = 0; i < 26; i++) {
            if (arr[i] >= max_val) {
                max_val = arr[i];
                maxi = 'a' + i;
            }
            if (arr[i] > 0 && arr[i] < min_val) {
                min_val = arr[i];
                mini = 'a' + i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == mini) {
                s[i] = maxi;
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}
