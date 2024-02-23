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
        ll n,k;
        cin>>n>>k;

        vecl v(n), p(n);
        forf  cin>>v[i];
        vector<int> position(n+1, 0);

        for (int i=0; i<n; i++) {
            cin>>p[i];
            position[abs(p[i])] += v[i];
        }
        int power = k;

        for (int i=1; i<=n; i++) {
            if (power < position[i]) {
                cout << "NO" << e;
                return;
            }

            power-= position[i];
            power+= 
        }
    }

    return 0;
}