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
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll n = 0;
    cin >> n;
    string coke[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    ll m1 = 5;
    while (n > m1)
    {
        n = n - m1;
        m1 = m1 * 2;
    }
    cout << coke[(n - 1) / (m1 / 5)];
}