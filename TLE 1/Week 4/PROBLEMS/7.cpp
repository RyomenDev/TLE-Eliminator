// https://cses.fi/problemset/task/1071
// Number Spiral

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(int r, int c)
// int solve(int c, int r)
{
    int ans = 0;
    if (r >= c) // row>column
    {
        if (r % 2) // odd row
        {
            ans = (r - 1) * (r - 1) + 1;
            ans = ans + c - 1;
        }
        else // even row
        {
            ans = (r * r);
            ans = ans - c + 1;
        }
    }
    else
    {
        if (c % 2) // odd row
        {
            ans = (c * c);
            ans = ans - r + 1;
        }
        else // even row
        {
            ans = (c - 1) * (c - 1) + 1;
            ans = ans + r - 1;
        }
    }
    return ans;
}

void Vatsh()
{
    // Your logic goes here
    int r, c;
    cin >> r >> c;
    cout << solve(r, c) << endl;
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
