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
        ll n = 0;
        ll k = 0;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << '\n';
        }
        else if (n == k)
        {
            cout << "1\n";
        }
        else if (k > n)
        {
            ll m1 = k / n;
            ll m2 = k % n;
            if (m2 != 0)
            {
                ++m1;
            }
            cout << m1 << '\n';
        }
        else if (k < n)
        {
            ll c1 = n / k;
            ll c2 = n % k;
            if (c2 != 0)
            {
                ++c1;
            }
            k = k * c1;
            ll z1 = k / n;
            ll z2 = k % n;
            if (z2 != 0)
            {
                ++z1;
            }
            cout << z1 << '\n';
        }
    }
}
