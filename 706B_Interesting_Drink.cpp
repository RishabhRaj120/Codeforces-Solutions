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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;
    vector<ll> v1;
    for (int i = 0; i < n; i++)
    {
        ll y = 0;
        cin >> y;
        v1.push_back(y);
    }
    sort(v1.begin(), v1.end());
    int q = 0;
    cin >> q;
    int c1 = 0;
    vector<int> v2;
    while (q--)
    {
        c1 = 0;
        ll m1 = 0;
        cin >> m1;
        c1 = upper_bound(v1.begin(), v1.end(), m1) - v1.begin();
        v2.push_back(c1);
    }
    for (int i : v2)
    {
        cout << i << '\n';
    }
}