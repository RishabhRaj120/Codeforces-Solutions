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
        map<int, int> mpp;
        for (int i = 0; i < s1.length(); i++)
        {
            int m1 = s1.at(i) - '0';
            ++mpp[m1];
        }
        int c1 = 0;
        c1 += mpp[4];
        map<int, int> v1;
        map<int, int> v2 = mpp;
        int c2 = INT_MAX;
        for (int i = 0; i < s1.length(); i++)
        {
            --v2[s1.at(i) - '0'];
            c2 = min(c2, v1[1] + v1[3] + v2[2]);
            ++v1[s1.at(i) - '0'];
        }
        c1 += c2;
        cout << c1 << '\n';
    }
}