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
#include <bitset>
using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r = 0;
    ll g = 0;
    ll b = 0;
    cin >> r >> g >> b;
    ll c1 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (r >= i && g >= i && b >= i)
        {
            c1 = max(c1, i + (r - i) / 3 + (g - i) / 3 + (b - i) / 3);
        }
    }
    cout << c1 << '\n';
}