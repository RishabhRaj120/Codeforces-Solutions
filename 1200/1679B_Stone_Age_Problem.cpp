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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    int q = 0;
    cin >> n >> q;
    ll sum = 0;
    vector<pair<ll, int>> v1;
    pair<ll, int> m1 = make_pair(0, -1);
    for (int i = 0; i < n; i++)
    {
        int m2 = 0;
        cin >> m2;
        v1.push_back(make_pair(m2, 0));
        sum += m2;
    }
    for (int it = 1; it <= q; it++)
    {
        int t = 0;
        cin >> t;
        if (t == 1)
        {
            int i = 0;
            ll x = 0;
            cin >> i >> x;
            if (v1[i - 1].second > m1.second)
            {
                sum += (x - v1[i - 1].first);
            }
            else
            {
                sum += (x - m1.first);
            }
            v1[i - 1].first = x;
            v1[i - 1].second = it;
        }
        else if (t == 2)
        {
            ll x = 0;
            cin >> x;
            m1.first = x;
            m1.second = it;
            sum = 1LL * n * x;
        }
        cout << sum << '\n';
    }
}