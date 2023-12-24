#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
   
    int v[n][3];
    int count = 0, temp = 0;
    
    for (int i=0; i<n; i++)
    {
        temp = 0;
       for (int j=0; j<3; j++)
       {
           cin >> v[i][j];

           if (v[i][j] == 1)
             temp++;
       }
       if (temp >= 2)
         count++;
    }

    cout << count << endl;
}