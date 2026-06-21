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
    vector<int> v1;
    for (int i = 0; i < 7; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
    }
    int i = 0;
    int s1 = n;
    int m1 = 1;
    while (s1 > 0)
    {
        s1 = s1 - v1[i % 7];
        m1 = i % 7;
        m1 += 1;
        if (s1 == 0 || s1 < 0)
        {
            break;
        }
        else
        {
            ++i;
        }
    }
    cout << m1 << '\n';
}