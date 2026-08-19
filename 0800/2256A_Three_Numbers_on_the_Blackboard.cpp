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
#include <unordered_map>
#include <stack>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll a = 0;
        ll b = 0;
        ll c = 0;
        cin >> a >> b >> c;
        if (a > b + c)
        {
            a = b + c;
        }
        if (b > a + c)
        {
            b = a + c;
        }
        if (c > a + b)
        {
            c = a + b;
        }
        ll m1 = max({a, b, c});
        ll m2 = min({a, b, c});
        cout << m1 - m2 << '\n';
    }
}