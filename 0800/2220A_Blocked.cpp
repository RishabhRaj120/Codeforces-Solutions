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
const double PI = 3.14159265358979323846;
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
        sort(v1.begin(), v1.end(), greater<int>());
        int c1 = 0;
        for (int i = 1; i < n; i++)
        {
            if (v1[i] == v1[i - 1])
            {
                ++c1;
            }
        }
        if (c1 == 0)
        {
            for (int i : v1)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << '\n';
    }
}