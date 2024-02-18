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

    while (t--)
    {
        ll n;
        cin>>n;

        string s;
        cin>>s;

        int total_coins=0;
        int i=0;
        while (i < n) {
            if (s[i] == '@') {
                total_coins++;
                i++;
            }
            else if (s[i]==s[i+1] && s[i]=='*') {
                i++;  
            }
        }

        cout << total_coins << e;
    }
    

    return 0;
}