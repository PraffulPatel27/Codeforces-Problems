#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define mod 1e9 + 7
#define vec vector<int>
#define vecl vector<long long>
#define e "\n"
#define en endl
#define pb push_back
#define ep emplace_back
#define ist insert
#define mp make_pair
#define forf for (auto i = 0; i < n; i++)
#define fore for (auto ch: s)

void solve() {
    int n;
    cin >> n;
    int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
    vector<pair<int, int>> mp;
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) {
        int x1, y1;
        cin >> x1 >> y1;
        mp.push_back({x1, y1});
    }

    sort(mp.begin(), mp.end());

    for (int k = 0; k < n; k++) {
        int i = mp[k].first, j = mp[k].second;
        if (i - x > 0) k1++;
        if (j - y > 0) k2++;
        if (i - x < 0) k3++;
        if (j - y < 0) k4++;
    }

    if (k1 && k2 && k3 && k4) 
        cout << "NO" <<e;

    else 
        cout << "YES" << e;
}

int main() {
    fast_read_input_output()
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
