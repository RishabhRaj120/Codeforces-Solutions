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
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        if (n & 1)
        {
            cout << "NO\n";
        }
        else
        {
            ll m1 = LLONG_MAX;
            ll m2 = LLONG_MIN;
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    m1 = min(m1, v1[i]);
                }
                else
                {
                    m2 = max(m2, v1[i]);
                }
            }
            if (m1 - m2 > 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}