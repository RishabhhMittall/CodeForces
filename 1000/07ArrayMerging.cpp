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

// Function to print a vector/array of any type T
template <typename T>
void print_array(const vector<T>& arr) {
    for (const T& element : arr) {
        cout << element << " ";
    }
    cout << endl;
}



// ---------- Solve Function ----------
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    unordered_map<int, int> sub1, sub2;

    int counter = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) counter++;
        else {
            sub1[a[i - 1]] = max(sub1[a[i - 1]], counter);
            counter = 1;
        }
    }
    sub1[a[n - 1]] = max(sub1[a[n - 1]], counter);

    counter = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) counter++;
        else {
            sub2[b[i - 1]] = max(sub2[b[i - 1]], counter);
            counter = 1;
        }
    }
    sub2[b[n - 1]] = max(sub2[b[n - 1]], counter);

    int ans = 0;

    // Combine results
    for (auto &it : sub1)
        ans = max(ans, it.second + sub2[it.first]);
    for (auto &it : sub2)
        ans = max(ans, it.second + sub1[it.first]);

    cout << ans << "\n";
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