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
    int n = 0;
    int k = 0;
    int l = 0;
    int c = 0;
    int d = 0;
    int p = 0;
    int nl = 0;
    int np = 0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalsoda = k * l;
    c = c * d;
    int m1 = min(totalsoda / nl, min(c, (p / np)));
    cout << m1 / n << '\n';
}