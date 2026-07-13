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
    int k = 0;
    cin >> k;
    vector<int> v1;
    for (int i = 0; i < 12; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    int c1 = 0;
    int c2 = 0;
    bool check = false;
    for (int i = 0; i < 12; i++)
    {
        if (c1 < k)
        {
            c1 += v1[i];
            ++c2;
        }
        if (c1 >= k)
        {
            check = true;
            break;
        }
    }
    if (check)
    {
        cout << c2 << '\n';
    }
    else
    {
        cout << "-1\n";
    }
}