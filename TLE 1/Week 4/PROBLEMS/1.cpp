// https://cses.fi/problemset/task/1083
// mISSING Number

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(vector<int> nums)
{
    int n = nums.size();
    int total = 0;
    for (int i = 1; i <= n; i++)
        total ^= i;
    for (auto i : nums)
        total ^= i;
    return total;
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> v(n);
    int i;
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
    // cin>>tt;
    while (tt--)
        Vatsh();

    return 0;
}