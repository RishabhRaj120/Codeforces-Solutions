#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <climits>
using namespace std;
typedef long long ll;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int m1 = n - 1;
        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < m1; i++)
        {
            int x = 0;
            cin >> x;
            s1 += x;
        }
        cout << -s1 << '\n';
    }
}