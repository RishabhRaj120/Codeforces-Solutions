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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
string pi = "314159265358979323846264338327950288419716939937510";
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        int q = 0;
        cin >> n >> q;
        vector<ll> v1;
        vector<ll> v2(n, 0); // max
        vector<ll> v3(n, 0); // sum

        for (int i = 0; i < n; i++)
        {
            ll x = 0;
            cin >> x;
            v1.push_back(x);
        }

        v3[0] = v1[0];
        for (int i = 1; i < n; i++)
        {
            v3[i] = v3[i - 1] + v1[i];
        }

        v2[0] = v1[0];
        for (int i = 1; i < n; i++)
        {
            v2[i] = max(v2[i - 1], v1[i]);
        }

        for (int i = 0; i < q; i++)
        {
            ll k = 0;
            cin >> k; // strength of leg
            ll low = 0;
            ll high = n - 1;
            ll m2 = -1; // largest index for which steps are covered
            while (low <= high)
            {
                ll mid = (low + high) / 2;
                if (v2[mid] <= k)
                {
                    m2 = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            if (m2 == -1)
            {
                cout << "0 ";
            }
            else
            {
                cout << v3[m2] << " ";
            }
        }
        cout << '\n';
    }
}