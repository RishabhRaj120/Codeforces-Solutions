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
bool isPrime(int c1)
{
    if (c1 <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= c1; i++)
    {
        if (c1 % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        if (isPrime(n + 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}