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
        ll a = 0;
        ll b = 0;
        ll c = 0;
        cin >> a >> b >> c;
        ll k1 = 0; // number of turns for Anna
        ll k2 = 0; // number of turns for Katie
        k1 += a;
        k2 += b;
        if (c & 1)
        {
            k1 += (c + 2 - 1) / 2;
            k2 += (c / 2);
        }
        else
        {
            k1 += (c / 2);
            k2 += (c / 2);
        }
        if (k1 > k2)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
}