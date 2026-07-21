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
        vector<int> v1(s1.length() + 1, 0);
        for (int i = 0; i < s1.length(); i++)
        {
            v1[i + 1] = v1[i] + (s1.at(i) == '0');
        }
        int j = 0;
        for (int i = s1.length() - 1; i >= 0; i--)
        {
            if (s1.at(i) != '0')
            {
                j = i;
                break;
            }
        }
        int c1 = s1.length() - 1;
        cout << c1 - v1[j + 1] << '\n';
    }
}