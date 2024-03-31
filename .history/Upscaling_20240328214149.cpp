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
void printCheckerboard(int n) {
    bool turn = true;
    bool first = true;
    vector<vector<char>> ans;

    for (int i = 0; i < 2 * n; ++i) {
        vector<char> temp;
        for (int j = 0; j < 2 * n; ++j) {
            if ((first && turn) || (!first && !turn))
                temp.push_back('#');
            else
                temp.push_back('.');
            if ((j + 1) % 2 == 0)
                turn = !turn;
        }
        ans.push_back(temp);
        if ((i + 1) % 2 == 0)
            first = !first;
    }

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
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
