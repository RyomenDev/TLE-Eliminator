// https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

bool solve(string s1, string s2)
{
    reverse(s1.begin(), s1.end());
    return s1 == s2;
}

void Vatsh()
{
    // Your logic goes here
    string s1, s2;
    cin >> s1 >> s2;
    if (solve(s1, s2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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