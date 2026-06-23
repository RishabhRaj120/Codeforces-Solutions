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
        int a = 0;
        int b = 0;
        int q = 0;
        cin >> a >> b >> q;
        ll m1 = a * b;
        vector<ll> v1(m1, 0);
        v1[0] = 0;
        for (int i = 1; i < m1; i++)
        {
            ll c1 = (i % a) % b;
            ll c2 = (i % b) % a;
            v1[i] = v1[i - 1];
            if (c1 != c2)
            {
                ++v1[i];
            }
        }
        while (q--)
        {
            ll l = 0;
            ll r = 0;
            cin >> l >> r;
            ll k1 = 0; // left1+left2
            ll k2 = 0; // right1+right2

            ll left1 = (l - 1) / m1; // we do l-1 is explained in the end
            left1 = left1 * v1[m1 - 1];
            ll left2 = (l - 1) % m1;
            left2 = v1[left2];
            k1 = left1 + left2;

            ll right1 = r / m1;
            right1 = right1 * v1[m1 - 1];
            ll right2 = r % m1;
            right2 = v1[right2];
            k2 = right1 + right2;
            cout << k2 - k1 << " ";
        }
        cout << '\n';
    }
}
/* Overall Question Logic
(x%a)%b!=(x%b)%a

Now We can write x%a as (ab+x)%a as when it's opened ab%a+x%a which gives 0+x which is x basically
and we can conclude that x will range from 0 to ab because let's say x>ab
then we can write x as ab+x~
now (ab+ab+x~)%a gives us (2ab+x~)%a which gives us 2ab%a+x~%a which is basically again 0+x~
hence We conclude x lies between 0 to ab both inclusive

Now what we will do is we create a number line from 0 to ab and count how many values of such x satisfy the give rule at Line 37
which is (x%a)%b=(x%b)%a

now this will repeat for [0,ab] & (ab,2ab] & (2ab,3ab] and so on

hence we will maintain a prefix vector sum for [0,ab] and then for l position we will calculate l/ab+l%ab and same for r/ab+r%ab
and then subtract to get the prefix sum values

In this code we have taken a*b as (m1) !!!


Main Problem we are facing is when we do k2-k1 we subtract l twice is giving us the wrong answer hence we calcualte till l-1 and then subtract
from l which gives us the proper result

*/