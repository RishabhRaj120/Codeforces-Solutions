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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
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
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int y = 0;
            cin >> y;
            v2.push_back(y);
        }
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] >= v2[i])
            {
                c1 += v1[i] - v2[i];
            }
        }
        cout << c1 + 1 << '\n';
    }
}