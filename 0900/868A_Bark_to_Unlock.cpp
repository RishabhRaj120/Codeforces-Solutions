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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1 = "";
    cin >> s1;
    int n = 0;
    cin >> n;
    vector<string> v1;
    for (int i = 0; i < n; i++)
    {
        string s2 = "";
        cin >> s2;
        v1.push_back(s2);
    }
    bool check = false;
    if (n == 1)
    {
        v1[0] = v1[0] + v1[0] + v1[0] + v1[0];
        if (v1[0].find(s1) != string::npos)
        {
            check = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!check)
        {
            if (v1[i][0] == s1.at(0) && v1[i][1] == s1.at(1))
            {
                check = true;
                break;
            }
            else if (v1[i][1] == s1.at(0))
            {
                for (int j = 0; j < n; j++)
                {
                    if (v1[j][0] == s1.at(1) && j != i)
                    {
                        check = true;
                        break;
                    }
                }
            }
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(v1[i].begin(), v1[i].end());
        if (s1 == v1[i])
        {
            check = true;
            break;
        }
    }
    if (check)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}