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
        ll x = 0;
        ll n = 0;
        cin >> x >> n;
        if ((x & 1))
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x + n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << '\n';
            }
            else if (n % 4 == 3)
            {
                cout << x - n - 1 << '\n';
            }
        }
        else
        {

            if (n % 4 == 0)
            {
                cout << x << '\n';
            }
            else if (n % 4 == 1)
            {
                cout << x - n << '\n';
            }
            else if (n % 4 == 2)
            {
                cout << x + 1 << '\n';
            }
            else if (n % 4 == 3)
            {
                cout << x + n + 1 << '\n';
            }
        }
    }
}