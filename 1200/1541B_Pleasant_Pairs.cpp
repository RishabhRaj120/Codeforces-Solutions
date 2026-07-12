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
        vector<pair<ll, ll>> v1;
        for (ll i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(make_pair(x, i + 1));
        }
        sort(v1.begin(), v1.end());
        int c1 = 0;
        for (ll i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v1[i].first * v1[j].first >= 2 * n)
                {
                    break;
                }
                if (v1[i].first * v1[j].first == v1[i].second + v1[j].second)
                {
                    ++c1;
                }
            }
        }
        cout << c1 << '\n';
    }
}

// i+j <=2n-1 as mentioned
// i=n-1
// j=n
// i+j<=2n-1
