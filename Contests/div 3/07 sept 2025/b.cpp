#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        vector<int> ans(n);

        for(int i = 0; i<n; i++) {
            ans[i] = n - arr[i] + 1;
            cout << ans[i] << " ";
        }
        cout << endl;

        

        
    }
    

    return 0;
}