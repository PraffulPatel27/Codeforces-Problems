#include<bits/stdc++.h>
using namespace std;
typedef long long II;
const int N = 2e5 + 5;
int n, m, a[N];
int main() {
ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int tc;
cin >> tc;
while(tc--) {
    int n;
cin >> n;

int a[n + 1];
for (int i = 1; i<= n; i++)
cin >> a[i];
for (int i = 2; i <= n/2; i++)
   if (a[i] == a[i - 1] || a[n-i+1]==a[n-i+2])
   {
      swap(a[i], a[n - i + 1]);
   }
   
int ans = 0;
for (int i = 1; i < n; i++) {
   if(a[i] == a[i + 1])
     ans++;

}

cout << ans << '\n';

}
return 0;
}