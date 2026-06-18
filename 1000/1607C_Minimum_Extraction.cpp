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
        int n = 0;
        cin >> n;
        vector<ll> v1;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        ll m1 = v1[0];
        ll m2 = m1;
        for (int i = 1; i < v1.size(); i++)
        {
            m1 = v1[i] - v1[i - 1];
            m2 = max(m1, m2);
        }
        cout << m2 << '\n';
    }
}