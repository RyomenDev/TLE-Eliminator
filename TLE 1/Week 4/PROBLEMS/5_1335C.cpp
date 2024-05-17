// https://codeforces.com/problemset/problem/1335/C
// C. Two Teams Composing

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(vector<int> v)
{
    unordered_map<int, int> mp;
    set<int> st;
    for (auto i : v)
    {
        mp[i]++;
        st.insert(i);
    }
    int maxSame = 0;
    int unique = st.size();
    for (auto i : mp)
    {
        if (i.second > maxSame)
        {
            maxSame = i.second;
        }
    }
    int ans = 0;
    if (maxSame >= unique + 1)
    {
        return unique;
    }
    if (maxSame == unique)
    {
        return unique - 1;
    }
    return min(maxSame, unique);
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << solve(v) << endl;
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