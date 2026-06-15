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
        vector<pair<int, int>> v1;
        for (int i = 0; i < n; i++)
        {
            int a = 0;
            int b = 0;
            cin >> a >> b;
            v1.push_back(make_pair(a, b));
        }
        if (n == 1)
        {
            if (v1[0].second > v1[0].first)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else if (n > 1)
        {
            bool check = false;
            int m1 = v1[0].first;
            int m2 = v1[0].second;
            if (m2 > m1)
            {
                check = true;
            }
            for (int i = 1; i < n; i++)
            {
                int a = v1[i].first;
                int b = v1[i].second;
                if (a < m1)
                {
                    check = true;
                    break;
                }
                if (b < m2)
                {
                    check = true;
                    break;
                }
                if (b > a)
                {
                    check = true;
                    break;
                }
                if ((b - m2) > (a - m1))
                {
                    check = true;
                    break;
                }
                m1 = a;
                m2 = b;
            }
            if (!check)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}