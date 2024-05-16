// https://codeforces.com/problemset/problem/1496/A
// A. Split it!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

string solve(string s, int k)
{
    int i = 0, n = s.size() - 1;
    if (k == 0 && n + 1 > 0)
        return "YES";
    while (s[i] == s[n] && i < (s.size() - 1) / 2)
    {
        // cout << s[i] << " " << s[n] << " " << i + 1 << " " << k << endl;
        if (i + 1 == k)
            return "YES";
        i++;
        n--;
    }
    return "NO";
}

void Vatsh()
{
    // Your logic goes here
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    cout << solve(s, k) << endl;
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