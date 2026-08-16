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
const double PI = 3.14159265358979323846;
int main()
{
    int n = 0;
    int d = 0;
    cin >> n >> d;
    vector<int> v1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
        time += x;
    }
    int t2 = time + (n - 1) * 10;
    if (t2 > d)
    {
        cout << "-1\n";
    }
    else
    {
        cout << (d - time) / 5 << '\n';
    }
}