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
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string s1 = "";
    string s2 = "";
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    if (s1.at(0) == '0' && s1.length() > 1)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1.at(i) != '0')
            {
                swap(s1.at(0), s1.at(i));
                break;
            }
        }
    }
    if (s1 == s2)
    {
        cout << "OK\n";
    }
    else
    {
        cout << "WRONG_ANSWER\n";
    }
}
