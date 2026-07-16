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
    int n = 0;
    cin >> n;
    string s1 = "";
    cin >> s1;
    string s2(n, 'a');
    vector<int> v1;
    if (n & 1)
    {
        for (int i = n - 1; i >= 0; i -= 2)
        {
            v1.push_back(i);
        }
        for (int i = 1; i < n; i += 2)
        {
            v1.push_back(i);
        }
    }
    else
    {
        for (int i = n - 1; i >= 1; i -= 2)
        {
            v1.push_back(i);
        }
        for (int i = 0; i < n; i += 2)
        {
            v1.push_back(i);
        }
    }
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        s2.at(i) = s1.at(v1[i]);
    }
    cout << s2 << '\n';
}