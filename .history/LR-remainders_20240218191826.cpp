#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define mod 1000000007
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
    // ll t;
    // cin>>t;

    // while (t--) {
    //     ll n,m;
    //     cin>>n>>m;

    //     vec v(n);
    //     ll product=1;
    //     for (int i=0; i<n; i++) {
    //         cin>>v[i];
    //         product*=v[i];
    //     }

    //     string s;
    //     cin>>s;
        
    //     vec ans;
    //     for (int i=0; i<n; i++) {
    //         ans.ep (product % m);
    //         if (s[i]=='L' && !v.empty()) {
    //             product/= v[0];
    //             v.erase (v.begin());
    //         }
    //         else if (s[i]=='R' && !v.empty()) {
    //             product/= v[v.size()-1];
    //             v.pop_back ();
    //         }
    //     }
         
    //     for (auto i: ans) {
    //         cout << i << " ";
    //     }
    //     cout << e;
    // }



    #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void read(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n, 0);
    read(a);

    string s;
    cin >> s;

    int l = 0;
    int r = n - 1;
    int val = 1;

    // Reverse me?
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'L') {
            l++;
        } else {
            r--;
        }
    }

    vector<int> ans;
    int cur = a[r];

    // l, r
    for (int i = n - 2; i >= -1; i--) {
        val = cur % m;
        cur = cur % m;
        ans.push_back(val);

        if (s[i] == 'L') {
            l--;
            cur = cur * a[l];
        } else {
            r++;
            cur = cur * a[r];
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto it : ans) {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}

    return 0;
}