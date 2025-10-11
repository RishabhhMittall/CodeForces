#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        
        vector<int> arr(n);

        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        ll ans = 0;
        vector<int> temp;
        for(int i = 0; i<n; i++) {
            if(arr[i] % 2 == 0) {
                ans += arr[i];
            }
            else {
                temp.push_back(arr[i]);
            }
        }

        if (temp.empty()) {
            cout << 0 << endl;
            continue;
        }

        sort(temp.begin(), temp.end(), greater<int>());
        int k = temp.size();

        int x = (k + 1) / 2;

        for (int i = 0; i < x; i++) {
            ans += temp[i];
        }

        cout << ans << endl;


    }

    return 0;
}