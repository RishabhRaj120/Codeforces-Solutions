#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <set>
#include <tuple>
#include <map>
using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        int q = 0;
        vector<ll> v1;
        cin >> n >> q;
        vector<ll> sum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
            sum[i + 1] = sum[i] + v1[i];
        }
        ll total = sum[n];
        for (int j = 0; j < q; j++)
        {
            ll l = 0;
            ll r = 0;
            ll k = 0;
            cin >> l >> r >> k;
            ll s1 = sum[r] - sum[l - 1];
            ll m2 = total - s1 + ((r - l + 1) * k);
            if (m2 & 1)
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