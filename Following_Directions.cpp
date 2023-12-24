#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0, y = 0;
        bool check = false;
        int i = 0;
        while (i<n)
        {
            if (s[i] == 'U')
            {
                y++;
                if (x==1 && y==1)
                {   
                   cout << "YES" << endl;
                   check = true;
                   break;
                }
            }
            else if (s[i] == 'R')
            {
                x++;
                if (x==1 && y==1)
                {   
                   cout << "YES"<< endl;
                   check = true;
                   break;
                }
            }
            else if (s[i] == 'D')
            {
                y--;
                if (x==1 && y==1)
                {   
                    cout << "YES"<< endl;
                    check = true;
                    break;
                }
            }
            else
            {
                x--;
                if (x==1 && y==1)
                {   
                    cout << "YES"<< endl;
                    check = true;
                    break;
                }
            }

            i++;
        }

         if (check == true)
         {
            
         }
         else
         {
            cout << "NO"<< endl;
         }
    }
}