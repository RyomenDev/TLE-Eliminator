// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(string s1, string s2)
{

    for (int i = 0; i < s1.size(); i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 != c2)
        {
            return c1 < c2 ? -1 : 1;
        }
    }
    return 0;
}

void Vatsh()
{
    // Your logic goes here
    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}