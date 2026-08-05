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
        ll d = 0;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && a == d && b == d && a == c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}