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
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, r; cin >> n; int sum = 0ll, odd = 0, eve = 0;
    for(int i = 0; i < n; ++i) {
        int c; cin >> c; sum += c;
        if(c & 1) odd++;
        else eve++;
        r = odd / 3;
        if(eve == 0 && odd == 1) r = 0;
        else if(odd % 3 == 1) r = (odd + 2) / 3;
        cout << sum - r << " ";
    }
    cout << "\n";
}
signed main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int testcase; cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}