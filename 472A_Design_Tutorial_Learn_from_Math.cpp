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
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
unordered_map<ll, int> dp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n = 0;
    cin >> n;
    if (!(n & 1))
    {
        cout << n - 4 << " " << 4 << '\n';
    }
    else
    {
        cout << n - 9 << " " << 9 << '\n';
    }
}
