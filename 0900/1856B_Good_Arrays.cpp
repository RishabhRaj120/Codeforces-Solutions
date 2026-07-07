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
        int c1 = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            sum += x;
            if (x == 1)
            {
                ++c1;
            }
        }
        if (n == 1)
        {
            cout << "NO\n";
        }
        else if (sum >= n + c1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}