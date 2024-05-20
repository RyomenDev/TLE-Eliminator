// https://codeforces.com/problemset/problem/1343/C
// C. Alternating Subsequence

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(vector<int> v)
{
    int ans = 0, n = v.size();
    for (int i = 0; i < n;)
    {
        int res = INT_MIN;
        if (v[i] < 0)
        {
            while (v[i] < 0 & i < n)
            {
                res = max(res, v[i]);
                i++;
            }
        }
        else
        {
            while (v[i] > 0 && i < n)
            {
                res = max(res, v[i]);
                i++;
            }
        }
        // cout << i << " " << res << " ";
        // cout << endl;
        ans += res;
    }
    // cout << endl;
    return ans;
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