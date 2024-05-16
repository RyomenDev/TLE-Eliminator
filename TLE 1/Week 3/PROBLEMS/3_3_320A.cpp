// https://codeforces.com/problemset/problem/320/A
// A. Magic Numbers

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

bool solve(string s)
{
    if (s[0] != '1')
        return false;
    if (s.size() == 1)
        return true;
    if (s[1] != '1' && s[1] != '4')
        return false;

    for (int i = 2; i < s.size(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
            return false;
        if (s[i] == '4' && s[i - 1] == '4' && s[i - 2] == '4')
            return false;
    }
    return true;
}

void Vatsh()
{
    // Your logic goes here
    string s;
    cin >> s;
    if (solve(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}