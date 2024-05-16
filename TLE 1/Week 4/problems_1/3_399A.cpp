// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve()
{
}

void Vatsh()
{
    // Your logic goes here
    string s;
    getline(cin, s);
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
            v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    string ans;
    for (auto i = 0; i < v.size(); i++)
    {
        ans += v[i] + '0';
        if (i != v.size() - 1)
            ans += '+';
    }
    cout << ans << endl;
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