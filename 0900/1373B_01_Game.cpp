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
        string s1 = "";
        cin >> s1;
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1.at(i) == '0')
            {
                ++c1;
            }
            else
            {
                ++c2;
            }
        }
        if (min(c1, c2) & 1)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NET\n";
        }
    }
}
