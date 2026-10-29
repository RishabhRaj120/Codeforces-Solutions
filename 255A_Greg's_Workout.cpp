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
    int n = 0;
    cin >> n;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int m1 = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        if (i % 3 == 0)
        {
            c1 += x;
        }
        else if (i % 3 == 1)
        {
            c2 += x;
        }
        else
        {
            c3 += x;
        }
    }
    m1 = max(c1, max(c2, c3));
    if (m1 == c1)
    {
        cout << "chest\n";
    }
    else if (m1 == c2)
    {
        cout << "biceps\n";
    }
    else
    {
        cout << "back\n";
    }
}
