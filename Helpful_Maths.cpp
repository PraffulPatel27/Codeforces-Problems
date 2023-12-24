#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int count = 0, k = 0;;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '+')
         count++;
    }
    for (int j=count; j<s.length(); j++)
    {
        cout << s[j];
        if (k < count) {
          cout << "+";
           k++;
        }
    }
}