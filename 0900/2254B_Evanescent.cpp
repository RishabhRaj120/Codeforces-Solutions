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
        int n = 0;
        cin >> n;
        string s1 = "";
        cin >> s1;
        for (int i = 1; i < n - 1; i++)
        {
            if (s1.at(i - 1) == s1.at(i + 1) && s1.at(i - 1) != s1.at(i))
            {
                s1.erase(i, 1);
                break;
            }
        }
        if (s1.length() == n)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (s1.at(i - 1) != s1.at(i) && s1.at(i) != s1.at(i + 1))
                {
                    s1.erase(i, 1);
                    break;
                }
            }
        }
        string s2 = "";
        for (int i = 0; i < s1.length(); i++)
        {
            if (i == 0 || s1.at(i) != s1.at(i - 1))
            {
                s2 += s1.at(i);
            }
        }
        cout << s2.length() << '\n';
    }
}