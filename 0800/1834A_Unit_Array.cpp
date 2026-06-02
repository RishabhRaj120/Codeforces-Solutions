#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <set>
#include <tuple>
#include <map>
#include <bitset>
#include <numeric>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{
    /* ios::sync_with_stdio(false);
     cin.tie(nullptr);
     */
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        ll c1 = 0;
        ll c2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            if (x == 1)
            {
                ++c1;
            }
            else
            {
                ++c2;
            }
        }
        ll m1 = 0;
        while (c1 < c2 || c2 % 2 == 1)
        {
            ++c1;
            --c2;
            ++m1;
        }
        cout << m1 << '\n';
    }
}