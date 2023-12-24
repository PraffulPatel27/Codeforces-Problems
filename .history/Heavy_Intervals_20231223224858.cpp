#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;

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

    std::vector<std::pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({l[i], 0});
        v.push_back({r[i], 1});
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
