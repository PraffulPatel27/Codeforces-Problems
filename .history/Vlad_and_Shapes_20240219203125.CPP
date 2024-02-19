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
    ll t;
    cin>>t;

    while (t--) {
        ll n;
        cin>>n;

        vector<vector<int>> v;
        vector<int> tp;

        for (int i=0; i<n; i++) {
            vector<int> temp;
            ll cnt = 0;
            for (int j=0; j<n; j++) {
                int x;
                cin>>x;
                temp.ep(x);

                if (x == 1) {
                   cnt++;
                }
            }
            v.pb(temp);

            if (cnt > 0) {
                tp.ep (cnt);
            }
        }

        ll square = 0, traingle = 0;
        int st= 
        for (int i=1; i<n; i++) {
            if (tp[i] == )
        }
    }
 
    return 0;
}