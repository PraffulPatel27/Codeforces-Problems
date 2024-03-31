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
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<vector<char>> ans(2*n, vector<char> (2*n));

        for (int i=0; i<ans.size(); i++) {
            for (int j=0; j<ans[0].size(); j++) {
                cout << ans[i][j] << " "
            }
        }
    }

    return 0;
}