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
        int n = 0;
        cin >> n;
        vector<ll> v1;
        ll c1 = 0;
        ll m1 = LLONG_MAX;
        int c2 = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
            c1 += abs(x);
            if (x < 0)
            {
                ++c2;
            }
            if (abs(x) < m1)
            {
                m1 = abs(x);
            }
        }
        if (c2 % 2 == 0)
        {
            cout << c1 << '\n';
        }
        else
        {
            c1 = c1 - 2 * m1;
            cout << c1 << '\n';
        }
    }
}