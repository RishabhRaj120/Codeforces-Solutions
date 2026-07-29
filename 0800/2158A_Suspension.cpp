#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
typedef long long ll;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int y = 0; // number of yellow cards
        int r = 0; // number of red cards
        cin >> y >> r;
        cout << min(n, r + y / 2) << '\n';
    }
}