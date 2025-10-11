/*--------------------------------------------------------------------------*\
|    ██████╗  █████╗ ██╗    ██╗ █████╗ ███╗   ██╗██████╗  █████╗ ██████╗    |
|    ██╔══██╗██╔══██╗██║    ██║██╔══██╗████╗  ██║██╔══██╗██╔══██╗██╔══██╗   |
|    ██████╔╝███████║██║ █╗ ██║███████║██╔██╗ ██║██║  ██║███████║██████╔╝   |
|    ██╔══██╗██╔══██║██║███╗██║██╔══██║██║╚██╗██║██║  ██║██╔══██║██╔══██╗   |
|    ██████╔╝██║  ██║╚███╔███╔╝██║  ██║██║ ╚████║██████╔╝██║  ██║██║  ██║   |
|    ╚═════╝ ╚═╝  ╚═╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝   |
\*--------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

// ---------- Shortcuts ----------
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

// ---------- Constants ----------
const int MOD = 1e9 + 7;
const int INF = 1e18;

// ---------- Fast I/O ----------
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}



// ---------- Solve Function ----------
void solve() {
    // Write your solution for each test case here

        int tot ;
        cin >> tot;
        int totSize = tot;
        vector<vector<int>> arr;

        while(totSize--) {
            int n;
            cin >> n;
            vector<int> temp(n);
            for(int i = 0; i<n;i++) {
                cin >> temp[i];
            }
            arr.push_back(temp);
        }
        
        int ans = 0; //dusramin + mini
        int mini = INT_MAX;

        for(int i = 0; i<tot; i++) {
            auto thisMin = min_element(arr[i].begin(), arr[i].end());
            int minEle = *thisMin;

            mini = min(minEle, mini);
            arr[i].erase(thisMin);
        }

        int secondMini = INT_MAX;

         for(int i = 0; i<tot; i++) {
            auto thisMin = min_element(arr[i].begin(), arr[i].end());
            int minEle = *thisMin;
            ans += minEle;

            secondMini = min(minEle, secondMini);
            // arr[i].erase(thisMin);
        }

        cout << ans - secondMini + mini << endl;
    }

// ---------- Main ----------
int32_t main() {
    fast_io();

    int t = 1;
    cin >> t;    // Uncomment if multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}