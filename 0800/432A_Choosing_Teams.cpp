#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    while (v1.back() == 5)
    {
        v1.pop_back();
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] + k <= 5)
        {
            v2.push_back(v1[i]);
        }
    }
    int c1 = 0;
    if (!v2.empty() && v2.size() >= 3)
    {
        c1 += v2.size() / 3;
    }
    cout << c1;

    return 0;
}