#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k;
    cin >> n >> k;
   
    vector<int> v;
    int count = 0;
    
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        
        if (i <= k)
        { 
          if (v[i] > 0)  
            count++;

        }
    }
    
    cout << count << endl;
}