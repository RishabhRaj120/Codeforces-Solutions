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
        vector<pair<ll, int>> v1;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            if (x % k == 0)
            {
                x = k;
            }
            else
            {
                x = x % k;
            }
            v1.push_back(make_pair(x, i + 1));
        }
        // writing a custom sort function
        sort(v1.begin(), v1.end(), [](auto a, auto b)
             {
            if (a.first != b.first)
            {
                return a.first > b.first;
            }
            else
            {
                return a.second < b.second;
            } });
        for (auto x : v1)
        {
            cout << x.second << " ";
        }
        cout << '\n';
    }
}
