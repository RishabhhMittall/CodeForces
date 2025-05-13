#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<ll, ll>> costPep;
        costPep.push_back({p, n + 1});

        for (int i = 0; i < n; i++) costPep.push_back({b[i], a[i]});

        sort(costPep.begin(), costPep.end());

        int total = 1;
        ll cost = p;

        int idx = 0;
        while (total < n) {
            int leftToInform = n - total;

            if (costPep[idx].second <= leftToInform) {
                total += costPep[idx].second;
                cost += costPep[idx].first * costPep[idx].second;
            } else {
                total = n;
                cost = cost + leftToInform * costPep[idx].first;
            }
            idx++;
        }
        cout << cost << endl;
    }

    return 0;
}