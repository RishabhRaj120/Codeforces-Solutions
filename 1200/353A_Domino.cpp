#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
int main()
{
    int n = 0;
    cin >> n;
    int s1 = 0;
    int s2 = 0;
    int c1 = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        s1 += a;
        s2 += b;
        if ((a % 2) != (b % 2))
        {
            ++c1;
        }
    }
    if ((s1 % 2) != (s2 % 2))
    {
        cout << "-1\n";
    }
    else if (s1 % 2 == 0 && s2 % 2 == 0)
    {
        cout << "0\n";
    }
    else if (c1 > 0)
    {
        cout << "1\n";
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}