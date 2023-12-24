#include<bits/stdc++.h>
using namespace std;
void check (int x, int& sum)
{
        if (x == 1)        
          sum+= 6;

        else if (x == 2)
           sum+= 5;

       else if (x == 3)
          sum+= 4;

        else if (x == 4)
          sum+= 3;

        else if (x == 5)
          sum+= 2;

        else if (x == 6)
          sum+= 1;

}
int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b;
        cin >> a >> b;
       int sum = 0;
        
         check (a, sum);
         check (b, sum);

         cout << sum << endl;
    }
}