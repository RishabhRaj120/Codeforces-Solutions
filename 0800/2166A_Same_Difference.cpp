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
        char ch[26] = {0};
        int n = 0;
        cin >> n;
        string s1 = "";
        cin >> s1;
        int c1 = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s1.at(i) != s1.at(n - 1))
            {

                ++c1;
            }
        }
        cout << c1 << '\n';
    }
    return 0;
}