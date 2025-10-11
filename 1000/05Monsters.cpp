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

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    vector<pair<int,int>> track;
    
    for(int i = 0; i<n; i++) {
        if(arr[i] % k == 0) {
            arr[i] = k;
            track.pb({k,-i});
        }
        else {
            arr[i] = arr[i] %k;
            track.pb({arr[i], -i});
        }
    }
    
    sort(all(track));
    
    vector<int> ans;
    for(int i = n - 1; i>= 0; i--) {
        int idx = abs(track[i].second);
        ans.pb(idx + 1);
    }


    for(int i = 0; i<n; i++) {
        cout << ans [i] << " ";
    }cout << endl;
}

// ---------- Main ----------
int32_t main() {
    fast_io();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}