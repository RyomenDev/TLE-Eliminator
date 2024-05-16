// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

string solve(string s)
{
    string temp;
    for (auto i : s)
    {
        char c = tolower(i);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c=='y')
            continue;
        else
            temp.push_back(c);
    }
    if (temp.length() == 0)
        return temp;
    string ans;
    for (auto i : temp)
    {
        ans += '.';
        ans += i;
    }
    return ans;
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
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}