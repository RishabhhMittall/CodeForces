#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arrays(n);

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            arrays[i].resize(k);
            for (int j = 0; j < k; j++) cin >> arrays[i][j];
        }

        vector<int> used(n, 0);
        vector<int> bottomRow;

        int currentCol = 0;
        while (true) {
            int chosen = -1;
            int minVal = INT_MAX;

            // Find array with smallest element in current column
            for (int i = 0; i < n; i++) {
                if (!used[i] && currentCol < (int)arrays[i].size()) {
                    if (arrays[i][currentCol] < minVal) {
                        minVal = arrays[i][currentCol];
                        chosen = i;
                    }
                }
            }

            if (chosen == -1) break;

            // Append entire chosen array to bottom row
            for (int x : arrays[chosen]) bottomRow.push_back(x);
            used[chosen] = 1;
            currentCol += arrays[chosen].size();
        }

        for (int x : bottomRow) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
