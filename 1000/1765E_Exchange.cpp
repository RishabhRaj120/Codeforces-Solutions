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
        // 1 gold coin for a silver coins
        // 1 gold coin buy for b silver coins
        ll n = 0;
        ll a = 0;
        ll b = 0;
        cin >> n >> a >> b;
        ll c1 = 0; // count of quest
        if (a <= b)
        {
            c1 += (n + a - 1) / a;
        }
        else
        {
            c1 = 1;
        }
        cout << c1 << '\n';
    }
}