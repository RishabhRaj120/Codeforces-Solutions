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
    cin >> n;
    set<ll> v1;
    for (int i = 0; i < n; i++)
    {
        ll x = 0;
        cin >> x;
        while (x % 2 == 0)
        {
            x = x / 2;
        }
        while (x % 3 == 0)
        {
            x = x / 3;
        }
        v1.insert(x);
    }
    if (v1.size() > 1)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
}