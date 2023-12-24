#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<vector<int>> v;
    vector<int> a;
    int colmin, max = INT_MIN;

    for (int k=0; k<n; k++)
    {
         a.clear();
        for (int p=0; p<n; p++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
       
    }

      for (auto i=0; i<v.size(); i++)
    {
        for (auto j=0; j<v[i].size(); j++)
        { 
            colmin = v[i].size()-1;

            if (i == j && v[i][j] > max)
            {
                max = v[i][j];
            }
            else if (j == (colmin-i) && v[i][j]> max)
            {
                max = v[i][j]; 
            }
        }
    }

    cout << max << endl;
}


