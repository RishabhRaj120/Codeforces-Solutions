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
        ll a = 0;
        ll b = 0;
        cin >> a >> b;
        cout << (a ^ b) << '\n';
    }
}