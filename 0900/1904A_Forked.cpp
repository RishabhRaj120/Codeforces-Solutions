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
        ll xk = 0;
        ll yk = 0;
        ll xq = 0;
        ll yq = 0;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        vector<pair<ll, ll>> v1;
        vector<pair<ll, ll>> v2;
        if (a != b)
        {
            v1.push_back(make_pair(xk - a, yk - b));
            v1.push_back(make_pair(xk + a, yk + b));
            v1.push_back(make_pair(xk - a, yk + b));
            v1.push_back(make_pair(xk + a, yk - b));

            v1.push_back(make_pair(xk - b, yk - a));
            v1.push_back(make_pair(xk + b, yk + a));
            v1.push_back(make_pair(xk - b, yk + a));
            v1.push_back(make_pair(xk + b, yk - a));

            v2.push_back(make_pair(xq - a, yq - b));
            v2.push_back(make_pair(xq + a, yq + b));
            v2.push_back(make_pair(xq - a, yq + b));
            v2.push_back(make_pair(xq + a, yq - b));

            v2.push_back(make_pair(xq - b, yq - a));
            v2.push_back(make_pair(xq + b, yq + a));
            v2.push_back(make_pair(xq - b, yq + a));
            v2.push_back(make_pair(xq + b, yq - a));
        }
        else
        {
            v1.push_back(make_pair(xk - a, yk - b));
            v1.push_back(make_pair(xk + a, yk + b));
            v1.push_back(make_pair(xk - a, yk + b));
            v1.push_back(make_pair(xk + a, yk - b));

            v2.push_back(make_pair(xq - a, yq - b));
            v2.push_back(make_pair(xq + a, yq + b));
            v2.push_back(make_pair(xq - a, yq + b));
            v2.push_back(make_pair(xq + a, yq - b));
        }
        int c1 = 0;
        for (auto k1 : v1)
        {
            for (auto k2 : v2)
            {
                if (k1 == k2)
                {
                    ++c1;
                }
            }
        }
        cout << c1 << '\n';
    }
}