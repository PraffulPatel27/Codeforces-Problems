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
bool solve (vector<int>& v,ll& n) {
    ll sum= accumulate(v.begin(), v.end(), 0);

        if (sum % n == 0) {
            int divis= sum / n;

            int store= 0;
            for (auto i=0; i<n; i++) {
                if (v[i] > divis) {
                    // int need= abs(divis- v[i]);
                    store+= abs(divis- v[i]);
                    v[i]= divis;
                }
                else if (v[i] < divis) {
                    int need= abs(divis- v[i]);
                    if (need <= store) {
                        v[i]= divis;
                        store-= need;
                    }
                    else {
                       return false;
                       break;
                    }
                }
            }
            
            bool flag= false;
            for (auto j=0; j<n; j++) {
                if (v[j] != divis) {
                    return false;
                    break;
                }
            }

            if (!flag) {
                return true;
            }
        }
        
    return false;
}
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

        if (solve (v, n)) 
           cout << "YES" << e;
        
        else 
           cout << "NO" << e;
    }

    return 0;
}