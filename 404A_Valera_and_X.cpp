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
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
unordered_map<ll, int> dp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n = 0;
    cin >> n;
    char arr[n][n] = {'a'};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    char ch1 = arr[0][0];
    char ch2 = arr[0][1];
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - j - 1)
            {
                if (arr[i][j] != ch1)
                {
                    check = false;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != ch2)
                {
                    check = false;
                    break;
                }
            }
        }
        if (!check)
        {
            break;
        }
    }
    if (check && ch1 != ch2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
