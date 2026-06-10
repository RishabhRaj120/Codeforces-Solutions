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
        string s1 = "";
        string s2 = "";
        cin >> s1;
        if (s1.length() > 2)
        {
            s2 = s1.substr(0, s1.length() - 2);
            s2 += "i";
        }
        else
        {
            s2 = "i";
        }
        cout << s2 << '\n';
    }
}