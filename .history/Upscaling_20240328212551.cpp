// #include<bits/stdc++.h>
// using namespace std;
// #define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define ll long long
// #define mod 1000000007
// #define vec vector<int>
// #define vecl vector<long long>
// #define e "\n"
// #define en endl
// #define pb push_back
// #define ep emplace_back
// #define ist insert
// #define mp make_pair
// #define forf for (auto i=0; i<n; i++)
// #define fore for (auto ch: s)
// int main()
// {
//     fast_read_input_output()
//     int t;
//     cin>>t;

//     while (t--) {
//         int n;
//         cin>>n;

//         vector<vector<char>> ans(2*n, vector<char> (2*n));

//         for (int i=0; i<ans.size(); i++) {
//             for (int j=0; j<ans[0].size(); j++) {
//                 ans[i][j] = '#';
//             }
//         }

//         for (int i=0; i<ans.size(); i++) {
//             for (int j=0; j<ans[0].size(); j++) {
//                 cout << ans[i][j] << " ";
//             }
//             cout << e;
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i % 4 < 2 && j % 4 < 2) || (i % 4 >= 2 && j % 4 >= 2)) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        printCheckerboard(n);
        if (i < t - 1)
            cout << endl; // Empty line between test cases
    }

    return 0;
}
