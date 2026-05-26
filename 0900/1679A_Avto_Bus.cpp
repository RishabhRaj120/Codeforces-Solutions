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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0;
        cin >> n;
        if (n < 4 || n & 1)
        {
            cout << "-1\n";
        }
        else
        {
            ll max = floor(n / 4);
            ll min = ceil(n * 1.0 / 6);
            cout << min << " " << max << '\n';
        }
    }
}