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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int k = 0;
    cin >> k;
    for (int i = 0; i < 3; i++)
    {
        int x = 0;
        int y = 0;
        cin >> x >> y;
        if (k == x)
        {
            k = y;
        }
        else if (k == y)
        {
            k = x;
        }
    }
    cout << k << '\n';
}