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
    


    return 0;
}
void printCheckerboard(int n) {
    vector<vector<char>> ans(2 * n, vector<char>(2 * n));

    for (int i = 0; i < 2 * n; ++i) {
        for (int j = 0; j < 2 * n; ++j) {
            int row = i / 2;
            int col = j / 2;
            if ((row + col) % 2 == 0)
                ans[i][j] = '#';
            else
                ans[i][j] = '.';
        }
    }

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j];
            if ((j + 1) % 2 == 0)
                cout << " ";
        }
        cout << endl;
        if ((i + 1) % 2 == 0)
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
