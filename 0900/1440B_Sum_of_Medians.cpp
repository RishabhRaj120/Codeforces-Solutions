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
        for (int i = 0; i < n * k; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        ll c1 = 0;
        ll j = n * k;
        for (int i = 0; i < k; i++)
        {
            j = j - (n / 2 + 1);
            c1 += v1[j];
        }
        cout << c1 << '\n';
    }
}