#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;

    // Input arrays
    std::vector<int> l(n), r(n), c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> r[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> c[i];
    }

    // Create a vector of events based on left and right limits
    std::vector<std::pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({l[i], 0}); // 0 represents left limit
        v.push_back({r[i], 1}); // 1 represents right limit
    }

    std::vector<int> cur;
    sort(v.begin(), v.end());

    std::vector<int> w;
    for (auto x : v) {
        if (x.second == 0) {
            cur.push_back(x.first);
        } else {
            w.push_back((x.first - cur.back()));
            cur.pop_back();
        }
    }

    sort(w.begin(), w.end());
    sort(c.begin(), c.end(), std::greater<int>());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (w[i] * c[i]);
    }

    std::cout << ans << std::endl;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
