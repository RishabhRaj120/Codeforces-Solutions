#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll x = 0;
        ll k = 0;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << "2\n";
            cout << x - 1 << " " << "1\n";
        }
        else
        {
            cout << "1\n";
            cout << x << "\n";
        }
    }

    return 0;
}