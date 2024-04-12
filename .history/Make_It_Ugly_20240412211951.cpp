#include<bits/stdc++.h>
using namespace std;
#define fast_read_input_output() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define lli long long int
#define mod 1000000007
#define mod1 998244353
#define PI 3.141592653589793238462
#define vec vector<int>
#define vecl vector<long long>
#define endl "\n"
#define pb push_back
#define ep emplace_back
#define ist insert
#define mp make_pair
#define sort(a) sort((a).begin(),(a).end());
#define rsort(a) sort((a).begin(),(a).end(),greater<>())
#define sum(a, initial) accumulate((a).begin(),(a).end(), initial);
#define min(a) *min_element((a).begin(),(a).end());
#define max(a) *max_element((a).begin(),(a).end());
#define forf for (auto i=0; i<n; i++)
#define fore for (auto ch: s)
#define pye cout<<"YES"<<"\n"
#define pne cout<<"NO"<<"\n"
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

        int ans = n-1;
     
        for (int i=1; i< n - 1; ++i) { 
            if (v[i-1] == v[i+1]) { 
                ans = min (ans, 1); 
            } 
        } 
     
        if (a[0] == a[1]) { 
        minRemovals = min(minRemovals, 1); 
        } 
        if (a[n - 1] == a[n - 2]) { 
        minRemovals = min(minRemovals, 1); 
        } 
     
    if (minRemovals == n - 1) { 
        return -1; // It's not possible to make the array not beautiful 
    } 
     
    return minRemovals; 

    return 0;
}