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

        vec v(n);
        forf cin>>v[i];
        
        vector<int> c= v;
        // first
        int first= 1;
        for (int i = 1; i < n; i++) {
            if (v[i] == v[0]) {
                first++;
            } 
            else {
                break;
            }
        }
        // second
        int snd= 1;
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] == v[n - 1]) {
                snd++;
            } 
            else {
                break;
            }
        }
        // cout <<e <<  first << " " << snd << e;

        if (v[0] == v[n-1]) {
            if (first == n && snd == n) {
                cout << 0 << e;
            }
            else {
                cout << (n - (first + snd)) << e;
            }
        }
        else {
            if (first > snd) {
                cout << (n - first) << e;
            }
            else {
                cout << (n - snd) << e;
            }
        }
    }

    return 0;
}