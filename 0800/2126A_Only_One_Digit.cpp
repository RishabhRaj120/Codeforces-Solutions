#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <set>
#include <tuple>
#include <map>
using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0;
        cin >> x;
        int m1 = INT_MAX;
        while (x != 0)
        {
            int d = x % 10;
            if (d < m1)
            {
                m1 = d;
            }
            x = x / 10;
        }
        cout << m1 << '\n';
    }
}