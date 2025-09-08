#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr1(n), arr2(n);

        for (ll i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        if (arr1[n - 1] != arr2[n - 1]) {
            cout << "NO" << endl;
            continue;
        }

        bool flag = true;

        for (int i = n - 2; i >= 0; i--) {
            ll a = arr2[i];
            ll b = arr1[i];
            ll op1 = b;
            ll op2 = b ^ arr1[i + 1];
            ll op3 = b ^ arr2[i + 1];

            if (a == op1 || a == op2 || a == op3) {
                continue;
            } else {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}