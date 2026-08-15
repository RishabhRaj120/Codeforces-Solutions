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
    int hour[n];
    int mins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> hour[i];
        cin >> mins[i];
    }
    int c1 = 1;
    int c2 = 1;
    for (int i = 1; i < n; i++)
    {

        if (hour[i] == hour[i - 1] && mins[i] == mins[i - 1])
        {
            ++c1;
            c2 = max(c1, c2);
        }
        else
        {
            c1 = 1;
        }
    }
    cout << c2 << '\n';

    return 0;
}