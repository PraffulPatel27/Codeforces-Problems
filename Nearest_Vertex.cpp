#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int dist1 = abs(1 - x) + abs(1 - y);
        int dist2 = abs(1 - x) + abs(m - y);
        int dist3 = abs(n - x) + abs(1 - y);
        int dist4 = abs(n - x) + abs(m - y);
        int minDist = min(dist1, min(dist2, min(dist3, dist4)));

        cout << minDist << endl;
    }
    return 0;
}
