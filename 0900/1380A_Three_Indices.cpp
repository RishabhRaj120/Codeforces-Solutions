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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            cin >> x;
            v1.push_back(x);
        }
        bool check = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (v1[i] > v1[i - 1] && v1[i] > v1[i + 1])
            {
                check = true;
                cout << "YES\n";
                cout << i << " " << i + 1 << " " << i + 2 << '\n';
                break;
            }
        }
        if (!check)
        {
            cout << "NO\n";
        }
    }
}
