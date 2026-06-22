#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int c1 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1.at(i);
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            ++c1;
        }
    }
    c1 > 0 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}