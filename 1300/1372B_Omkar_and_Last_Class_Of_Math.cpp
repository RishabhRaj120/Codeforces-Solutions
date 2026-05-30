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
bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
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
        ll n = 0;
        cin >> n;
        if (n & 1)
        {
            if (isPrime(n))
            {
                cout << "1 " << n - 1 << '\n';
            }
            else
            {
                for (int i = 3; i < n; i++)
                {
                    if (n % i == 0)
                    {
                        cout << n / i << " " << (n - (n / i)) << '\n';
                        break;
                    }
                }
            }
        }
        else
        {
            cout << n / 2 << " " << n / 2 << '\n';
        }
    }
}