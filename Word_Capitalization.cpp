#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;
    
        if (isupper(s[0]))
        {
            cout << s[0];
        }
        else if (islower(s[0]))
        {
            cout << char(s[0]-32);
        }

    for (auto i=1; i<s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;

}