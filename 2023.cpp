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
     ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        ll pdt=1;

        for (int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            pdt*= x;
        }

        if (2023%pdt == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / pdt << " ";
            for (int i=1; i<=k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<e;
        }
        else
        {
            cout<<"NO"<<e;
        }
    }

    return 0;
}