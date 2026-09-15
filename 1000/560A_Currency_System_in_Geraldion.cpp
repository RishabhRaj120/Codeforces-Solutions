#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
#include <map>
using namespace std;
typedef long long ll;
const double PI = 3.14159265358979323846;
int main()
{
    int n = 0;
    cin >> n;
    int c1 = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        if (x == 1)
        {
            ++c1;
        }
    }
    if (c1 == 0)
    {
        cout << "1\n";
    }
    else
    {
        cout << "-1\n";
    }
}