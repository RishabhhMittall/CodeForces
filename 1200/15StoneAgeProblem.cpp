/*--------------------------------------------------------------------------*\
|    ██████╗  █████╗ ██╗    ██╗ █████╗ ███╗   ██╗██████╗  █████╗ ██████╗    |
|    ██╔══██╗██╔══██╗██║    ██║██╔══██╗████╗  ██║██╔══██╗██╔══██╗██╔══██╗   |
|    ██████╔╝███████║██║ █╗ ██║███████║██╔██╗ ██║██║  ██║███████║██████╔╝   |
|    ██╔══██╗██╔══██║██║███╗██║██╔══██║██║╚██╗██║██║  ██║██╔══██║██╔══██╗   |
|    ██████╔╝██║  ██║╚███╔███╔╝██║  ██║██║ ╚████║██████╔╝██║  ██║██║  ██║   |
|    ╚═════╝ ╚═╝  ╚═╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝   |
|                      .....                   .....                        |
|                 . ´           ` ·.::::::.· ´          ` .                 |
|              .´   .:::@:::::)   :::::   (:::::@:::.  `.                   |
|             :   (::´            .:::::::.            `::)  :              |
|           .::`...        .....:::::::::::::....        ...´::.            |
|        .::::::::::::::::::::::::::::::::::::::::::::::::::::::::.         |
|     .:::/::::::::::::::::::::::::::::::::::::::::::::::::::::::\:::.      |
|    ::(--\::::::::::::::::::::::::::::::::::::::::::::::::::::::/--)::     |
|     `.:::::.``··::::::::::::::::::::::::::::::::::::::::··´´.:::::.´      |
|       `·:::::.         ``··::::::::::::::::::::··´´       .:::::·´        |
|          `·:::::.            `.           .´           .:::::·´           |
|              `·:::::.           `  ···· ´           .:::::·´              |
|                  `·:::::.                       .:::::·´                  |
|                  .::::`·:::::..            ..:::::·´::::.                 |
|              .:::::::::::::``·:::::::::::::·´´:::::::::::::.              |
|           .:::::::·´.::::::::::`::::::::´:::::::::::.`·:::::::.           |
|        ·´´´´´    .:::::::::·´`·:::::::::::·´`·::::::::.    `````·         |
|               .::::::·´         `·:::::·´        `·::::::.                |
|            ·´´´´´                  `·´                `````·              |
\*--------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

// ---------- Shortcuts ----------
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pii;

// ---------- Constants ----------
const int MOD = 1e9 + 7;
const int INF = 1e18;

// ---------- Fast I/O ----------
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// ---------- Utility Functions ----------
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;  // avoid overflow
}

template <typename T>
void printArray(const vector<T>& arr) {
    for (auto &x : arr) cout << x << ' ';
    cout << endl;
}


// ---------- Unique Elements (Maintain Order) ----------
template <typename T>
vector<T> uniqueElements(const vector<T>& arr) {
    vector<T> result;
    unordered_set<T> seen;
    for (const T &x : arr) {
        if (seen.find(x) == seen.end()) {
            result.pb(x);
            seen.insert(x);
        }
    }
    return result;
}
 // unique find using stl  a.resize(unique(a.begin(), a.end()) - a.begin());


// ---------- Read Vector ----------
typedef vector<int> vi;
vi readVector(int n) {
    vi a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    return a;
}


// ---------- Solve Function ----------
void solve() {

    int n , q;
    cin >> n >> q;

    vi a = readVector(n);

    unordered_map<int, int> mp;

    for(int i = 0; i<n; i++) {
        mp[i] = 0;
    }

    int lastAll = -1, lastVal = 0;
    int sum = accumulate(all(a), 0LL);
    bool flag = false;

    for(int i = 0; i<q; i++) {
        int t;
        cin >> t;
        if(t == 1) {
            int idx,x; 
            cin >> idx >> x;
            idx--;

            if(mp[idx] > lastAll) {
                sum += (x - a[idx]);
            }
            else {
                sum += (x - lastVal);
            }
            a[idx] = x;
            mp[idx] = i;

            cout << sum << endl;
        }
        else if(t == 2) {
            int x; cin >> x;

            lastAll = i; lastVal = x;
            sum = x*n;
            cout << sum << endl;
        }
    }

}

// ---------- Main ----------
int32_t main() {
    fast_io();

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}