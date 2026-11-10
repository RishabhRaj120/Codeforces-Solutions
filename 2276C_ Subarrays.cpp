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
        vector<ll> v1;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        v1[0] = v1[0] % k;
        for (int i = 1; i < n; i++)
        {
            v1[i] = (v1[i] + v1[i - 1]) % k;
        }
        ll c1 = 0;
        unordered_map<ll, ll> mpp;
        for (int j = k; j < n; j++)
        {
            int i = j - 1 - k;
            if (i == -1)
            {
                ++mpp[0];
            }
            else
            {
                ++mpp[v1[i]];
            }

            auto it = mpp.find(v1[j]);
            if (it != mpp.end())
            {
                c1 += it->second;
            }
        }
        cout << c1 << '\n';
    }
}
