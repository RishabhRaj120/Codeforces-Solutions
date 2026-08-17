#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <map>
using namespace std;
typedef long long ll;
int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
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
        ll c1 = 0;
        ll c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] == v1[0])
            {
                ++c1;
            }
            if (v1[i] == v1[v1.size() - 1])
            {
                ++c2;
            }
        }
        ll c3 = 0;
        if (v1[0] == v1[v1.size() - 1])
        {
            c3 = c1 * (c1 - 1);
        }
        else
        {
            c3 = 2 * c1 * c2;
        }
        cout << c3 << '\n';
    }
}