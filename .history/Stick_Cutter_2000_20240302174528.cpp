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
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
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

         int g = v[0]; 
        for (int i = 1; i < n; i++) {
            g = gcd(g, v[i]); 
        }

        cout << g << e;
    }

    return 0;
}