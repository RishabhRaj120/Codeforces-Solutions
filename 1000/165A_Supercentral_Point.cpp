#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
typedef long long ll;
int main()
{
    int n = 0;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int y = 0;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }
    int m1 = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v1[i];
        int y = v2[i];
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int c4 = 0;
        for (int j = 0; j < n; j++)
        {
            if (v1[j] > x && y == v2[j])
            {
                ++c1;
            }
            if (v1[j] < x && y == v2[j])
            {
                ++c2;
            }
            if (v1[j] == x && v2[j] > y)
            {
                ++c3;
            }
            if (v1[j] == x && v2[j] < y)
            {
                ++c4;
            }
        }
        if (c1 > 0 && c2 > 0 && c3 > 0 && c4 > 0)
        {
            ++m1;
        }
    }
    cout << m1 << '\n';
}