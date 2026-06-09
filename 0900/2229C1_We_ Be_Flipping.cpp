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
        vector<ll> v1;
        vector<int> v2;
        int c1 = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (c1 % 2 == 0)
            {
                if (v1[i] > 0)
                {
                    v2.push_back(i + 1);
                    ++c1;
                }
            }
            else
            {
                if (v1[i] < 0)
                {
                    v2.push_back(i + 1);
                    ++c1;
                }
            }
        }
        cout << c1 << '\n';
        for (int m1 : v2)
        {
            cout << m1 << " ";
        }
        cout << '\n';
    }
}