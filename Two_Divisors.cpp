#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() 
{
   int t;
   cin>>t;

    while (t--) {
        int a,b; 
        cin>>a>>b;
        
        int ans = (a*b)/__gcd(a, b);
       
        if (ans == b) 
          cout << ans*(b/a) << "\n";
        else 
          cout << ans<<"\n";
    }
    return 0;
}