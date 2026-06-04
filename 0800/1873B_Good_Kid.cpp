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
        ll m1 = 1;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            v1.push_back(x);
        }
        sort(v1.begin(), v1.end());
        ++v1[0];
        for (int i = 0; i < n; i++)
        {
            m1 *= v1[i];
        }
        cout << m1 << '\n';
    }
}