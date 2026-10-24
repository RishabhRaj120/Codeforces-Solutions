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
bool Check(long long n)
{
    if (n < 0)
    {
        return false;
    }
    long long c1 = sqrt(n);
    if (c1 * c1 == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0;
        cin >> n;
        bool check1 = false;
        if (n % 2 == 0)
        {

            ll m1 = n / 2;
            if (Check(m1))
            {
                cout << "YES\n";
                check1 = true;
            }
        }
        if (n % 4 == 0 && !check1)
        {
            ll m2 = n / 4;
            if (Check(m2))
            {
                cout << "YES\n";
                check1 = true;
            }
        }
        if (!check1)
        {
            cout << "NO\n";
        }
    }
}
