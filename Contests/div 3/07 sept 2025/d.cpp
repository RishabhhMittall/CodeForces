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


        map<int,int> mp;
        for (int i=0;i<n;i++) mp[arr[i]]++;

        bool bad = false;
        for (auto it : mp) {
            int f = it.first;   // frequency value
            int s = it.second;  // how many times it occurs in b
            if (s % f != 0) {   // must form complete groups
                cout << -1 << endl;
                bad = true;
                break;
            }
        }
        if (bad) continue;

        int uni = 1;
        vector<int> ans(n);
        unordered_map<int, pair<int, int>> mpi; 
   

        for (int i = 0; i < n; i++) {

            if (mpi.find(arr[i]) == mpi.end() || mpi[arr[i]].second == 0) {
                mpi[arr[i]] = make_pair(uni++, arr[i]); 
            }
            ans[i] = mpi[arr[i]].first;
            mpi[arr[i]].second--;

        }

        for (int i = 0; i<n; i++) {
            cout << ans[i] << " ";
        }    
        cout << endl;
    }

    return 0;
}
