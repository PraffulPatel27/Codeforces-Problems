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
        int n, k;
        cin>>n>>k;
        
        vec a(n), b(n);
        forf  cin>>a[i];
        forf  cin>>b[i];

        int sum=0, maxi= INT_MIN;
        for (int i=0; i<n; i++) {
            sum+=a[i];
            maxi= max (maxi, b[i]);
            
            if (i == k)
              break;
            

        }

    }

    return 0;
}