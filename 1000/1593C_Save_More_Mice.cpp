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
        ll n = 0;
        ll k = 0;
        cin >> n >> k;
        vector<ll> v1;
        for (int i = 0; i < k; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end(), greater<ll>());
        ll m1 = 0; // cat position
        ll c1 = 0; // count
        for (int i = 0; i < k; i++)
        {
            if (v1[i] > m1)
            {
                m1 += (n - v1[i]);
                ++c1;
            }
            else if (v1[i] < m1)
            {
                break;
            }
        }
        cout << c1 << '\n';
    }
}