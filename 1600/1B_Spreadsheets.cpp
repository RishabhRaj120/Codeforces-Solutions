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
using namespace std;
typedef long long ll;
typedef long double ld;
const double PI = 3.14159265358979323846;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    cin >> n;
    string s3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (n--)
    {

        string s1 = "";
        cin >> s1;
        string s2 = "";
        int c1 = 0;
        bool check = false;
        if (s1.at(0) == 'R' && isdigit(s1.at(1)))
        {
            for (int i = 1; i < s1.length(); i++)
            {
                if (isdigit(s1.at(i)))
                {
                    ++c1;
                }
                else if (s1.at(i) == 'C' && c1 > 0)
                {
                    check = true;
                }
            }
            if (check)
            {
                int k1 = 0;
                for (int i = s1.length() - 1; i >= 0; i--)
                {
                    if (s1[i] == 'C')
                    {
                        k1 = i;
                        break;
                    }
                }
                s2 = s1.substr(k1 + 1);
                int m1 = stoi(s2);
                string s4 = "";
                while (m1 != 0)
                {
                    m1 = m1 - 1;
                    int d = m1 % 26;
                    s4 = s3.at(d) + s4;
                    m1 = m1 / 26;
                }
                string s5 = "";
                int k2 = 0;
                for (int i = 1; i < s1.length(); i++)
                {
                    if (s1.at(i) == 'C')
                    {
                        k2 = i;
                        break;
                    }
                }
                s5 = s1.substr(1, k2 - 1);
                s4 += s5;
                cout << s4 << '\n';
            }
            else
            {
                string h1 = "";
                string h2 = "";
                string h3 = "";
                int g1 = 0;
                for (int i = s1.length() - 1; i >= 0; i--)
                {
                    if (isdigit(s1.at(i)))
                    {
                        h1 += s1.at(i);
                    }
                    else
                    {
                        g1 = i;
                        break;
                    }
                }
                reverse(h1.begin(), h1.end());
                h2 = s1.substr(0, g1 + 1);
                ll m4 = 0;
                for (int i = 0; i < h2.length(); i++)
                {
                    ll m5 = h2.at(i) - 'A' + 1;

                    m4 = m4 * 26 + m5;
                }

                cout << "R" << h1 << "C" << m4 << '\n';
            }
        }
        else
        {
            string h1 = "";
            string h2 = "";
            string h3 = "";
            int g1 = 0;
            for (int i = s1.length() - 1; i >= 0; i--)
            {
                if (isdigit(s1.at(i)))
                {
                    h1 += s1.at(i);
                }
                else
                {
                    g1 = i;
                    break;
                }
            }
            reverse(h1.begin(), h1.end());
            h2 = s1.substr(0, g1 + 1);
            ll m4 = 0;
            for (int i = 0; i < h2.length(); i++)
            {
                ll m5 = h2.at(i) - 'A' + 1;

                m4 = m4 * 26 + m5;
            }

            cout << "R" << h1 << "C" << m4 << '\n';
        }
    }
}