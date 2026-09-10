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
    int n = 0;
    cin >> n;
    vector<int> v1;
    unordered_map<int, vector<int>> mpp;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
        mpp[x].push_back(i);
    }
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mpp.find(v1[i] + v1[j]) != mpp.end())
            {
                vector<int> k1 = (mpp.find(v1[i] + v1[j]))->second;
                int k2 = k1[0];
                v2.push_back(i);
                v2.push_back(j);
                v2.push_back(k2);
                check = true;
                break;
            }
        }
        if (check)
        {
            break;
        }
    }
    reverse(v2.begin(), v2.end());
    if (check)
    {
        cout << v2[0] + 1 << " " << v2[1] + 1 << " " << v2[2] + 1 << '\n';
    }
    else
    {
        cout << "-1\n";
    }
}