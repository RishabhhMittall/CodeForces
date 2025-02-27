#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> price(7, INT32_MAX);  // Initialize with a large value instead of -1

    while (n--) {
        int c;
        string j;
        cin >> c >> j;

        sort(j.begin(), j.end());

        if (j == "A") price[0] = min(price[0], c);
        else if (j == "B") price[1] = min(price[1], c);
        else if (j == "C") price[2] = min(price[2], c);
        else if (j == "AB") price[3] = min(price[3], c);
        else if (j == "AC") price[4] = min(price[4], c);
        else if (j == "BC") price[5] = min(price[5], c);
        else if (j == "ABC") price[6] = min(price[6], c);
    }

    int zero = (price[0] == INT32_MAX || price[1] == INT32_MAX || price[2] == INT32_MAX) ? INT32_MAX : price[0] + price[1] + price[2]; // A + B + C
    int one = (price[3] == INT32_MAX || price[4] == INT32_MAX) ? INT32_MAX : price[3] + price[4]; // AB + AC
    int two = (price[3] == INT32_MAX || price[5] == INT32_MAX) ? INT32_MAX : price[3] + price[5]; // AB + BC
    int three = (price[4] == INT32_MAX || price[5] == INT32_MAX) ? INT32_MAX : price[4] + price[5]; // AC + BC
    int five = (price[3] == INT32_MAX || price[2] == INT32_MAX) ? INT32_MAX : price[3] + price[2];  // AB + C
    int six = (price[4] == INT32_MAX || price[1] == INT32_MAX) ? INT32_MAX : price[4] + price[1];   // AC + B
    int seven = (price[5] == INT32_MAX || price[0] == INT32_MAX) ? INT32_MAX : price[5] + price[0]; // BC + A
    int four = (price[6] == INT32_MAX) ? INT32_MAX : price[6]; // ABC

    int ans = min({zero, one, two, three, four, five, six, seven});

    if(ans == INT32_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
