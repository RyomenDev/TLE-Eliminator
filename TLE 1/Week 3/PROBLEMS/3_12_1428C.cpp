// https://codeforces.com/problemset/problem/1428/C
// C. ABBB

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(string s)
{

    string result;
    for (int i = 0; i < s.size(); ++i)
    {
        if (i < s.size() - 1 && (s[i] == 'A' && s[i + 1] == 'B' || s[i] == 'B' && s[i + 1] == 'B'))
        {
            ++i;
        }
        else
        {
            result += s[i];
        }
    }
    return result.size();
}

void Vatsh()
{
    // Your logic goes here
    string s;
    cin >> s;
    cout << solve(s) << endl;
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