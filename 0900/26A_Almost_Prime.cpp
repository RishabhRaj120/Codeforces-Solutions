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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
bool check(int m1)
{
    vector<int> v1;
    for (int i = 2; i * i <= m1; i++)
    {
        if (m1 % i == 0)
        {
            v1.push_back(i);
        }
        while (m1 % i == 0)
        {
            m1 = m1 / i;
        }
    }
    if (m1 > 1)
    {
        v1.push_back(m1);
    }
    if (v1.size() == 2)
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
    int n = 0;
    cin >> n;
    int c1 = 0;
    for (int i = 2; i <= n; i++)
    {
        if (check(i))
        {
            ++c1;
        }
    }
    cout << c1 << '\n';
}