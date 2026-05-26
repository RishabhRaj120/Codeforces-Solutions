#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                ++c1;
            }
        }
        if (c1 % 2 != 0)
        {
            cout << "-1\n";
        }
        else if (c1 % 2 == 0 && c1 != 0)
        {
            int x = c1 / 2;
            for (int i = 0; i < n; i++)
            {
                if (c2 == x)
                {
                    c3 = i;
                    break;
                }
                if (arr[i] == 2)
                {
                    ++c2;
                }
            }
            cout << c3 << '\n';
        }
        else if (c1 % 2 == 0 && c1 == 0)
        {
            cout << "1\n";
        }
    }
    return 0;
}