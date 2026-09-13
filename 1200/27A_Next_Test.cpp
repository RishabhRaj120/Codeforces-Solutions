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
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    int c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != i + 1)
        {
            cout << i + 1;
            ++c1;
            break;
        }
    }
    if (c1 == 0)
    {
        cout << n + 1 << '\n';
    }
}