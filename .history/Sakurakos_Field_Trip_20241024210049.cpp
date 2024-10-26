#include<bits/stdc++.h>
using namespace std;
typedef long long II;
const int N = 2e5 + 5;
int n, m, a[N];
int main() {
ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int tc;
cin >> tc;
while(tc—) {
cin >> n;
for (inti = 1; i n; i++)
cin >> a[i];
for (inti = 2; i <= n/2; i++)
swap(a[i], a[n - i +
int ans = 0;
for (inti = 1; i < n; i++) {
//cout << a[i] << '
if(a[i] == a[i + 1])
ans++;
cout << ans << '\n';

}
return 0;}