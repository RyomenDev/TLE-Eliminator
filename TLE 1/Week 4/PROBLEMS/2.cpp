// https://cses.fi/problemset/task/1094
// Increasing Array

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(vector<int> nums)
{
    int ans = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] >= nums[i])
        {
            int extra = nums[i - 1] - nums[i];
            nums[i] = extra + nums[i];
            ans += extra;
        }
    }
    return ans;
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
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}