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
#include <stack>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        string s1 = "";
        cin >> s1;
        int x = 1000000;
        int y = -1;
        for (int i = 0; i < n; i++)
        {
            if (s1.at(i) == '1')
            {
                x = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s1.at(i) == '0')
            {
                y = i;
                break;
            }
        }
        if (x < y)
        {
            cout << s1.substr(0, x) + "0" + s1.substr(y + 1) << '\n';
        }
        else
        {
            cout << s1 << '\n';
        }
    }
}
