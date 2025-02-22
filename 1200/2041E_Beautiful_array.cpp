#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int mean, med;
    cin >> mean >> med;

    vector<int> arr(3);
    // arr[2] = 2*((mean * 3) - med);
    // arr[0] =  - ((mean * 3) - med);
    // arr[1] = med;

    arr[2] = med;
    arr[1] = med;
    arr[0] = (mean * 3) - (arr[1] * 2);

    cout << 3 << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}