// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(vector<int> &v)
{
    int even = 0, odd = 0;
    for (auto i : v)
    {
        if (i & 1)
            odd++;
        else
            even++;
    }
    // cout << even << " " << odd << endl;
    if (even == odd)
        return 0;
    if (abs(even - odd) % 2 == 0)
        return abs(even - odd) / 2;
    return -1;
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = solve(v);
    cout << ans << endl;
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