#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define mod  1e9 + 7
#define vec vector<int>
#define vecl vector<long long>
#define e "\n"
#define en endl
#define pb push_back
#define ep emplace_back
#define ist insert
#define mp make_pair
#define forf for (auto i=0; i<n; i++)
#define fore for (auto ch: s)
int main()
{
    fast_read_input_output()
    void solve() {
    int n;
    cin >> n;

    vector<int> l(n), r(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        v.pb({l[i], 0});
        v.pb({r[i], 1});
    }

    vector<int> cur;
    sort(v.begin(), v.end());

    vector<int> w;
    for (auto x : v) {
        if (x.second == 0)
            cur.push_back(x.first);

        else {
            w.push_back((x.first - cur.back()));
            cur.pop_back();
        }
    }

    sort(w.begin(), w.end());
    sort(c.begin(), c.end(), greater<int>());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (w[i] * c[i]);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}