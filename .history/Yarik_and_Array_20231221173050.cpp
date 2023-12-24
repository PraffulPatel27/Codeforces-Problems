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
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vec v(n);
        forf cin>>v[i];

        int check= abs(v[0])%2, sum= v[0], maxi= v[0];

        for (int i=1; i<n; i++) {
            if (abs(v[i]%2 != check)) 
               sum+= v[i];

            else  
               sum= v[i];

            sum= max(sum, v[i]);
            check = abs(v[i])%2;
            maxi= max(maxi, sum);
        }
    }
    
    return 0;
}