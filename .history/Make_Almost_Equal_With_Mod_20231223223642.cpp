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
    
    vector<ll> A(n);
    for(int i=0; i<n; i++)
        cin>>A[i];

    ll k = 2;
    while (k < 1e18) {
      set<ll> s;
        for (int j=0; j<n; j++) 
           s.insert (A[j] % k);

        if (s.size() == 2)
          break;

        k*=2;
    }
       cout<<k <<e;
    }
    return 0;
}