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
    int n  , k , q;
    cin >> n  >> k >> q;

    vector<int> a(n);

    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }

    int i = 0;
    int start = i;
    int ans = 0;
    while(i < n) {
        if(a[i] <= q) {
            i++;
        }else {
            int days = i - start;
            i++;
            start = i;
            if(days < k) {
                continue;
            }
            else {
                int numberOfDays = days - k + 1;
                int total = (numberOfDays * (numberOfDays + 1)) /2;
                ans += total;
            }
        }
    }
    if(a[n-1] <= q) {
        int days = i - start;
            if(days < k) {
                
            }
            else {
                int numberOfDays = days - k + 1;
                int total = (numberOfDays * (numberOfDays + 1)) /2;
                ans += total;
            }
    }
    cout << ans << endl;
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