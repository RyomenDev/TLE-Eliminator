// https://codeforces.com/problemset/problem/1679/a
// A. AvtoBus

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

vector<int> solve(int n)
{ // 4 6 8 10 12 14 16 18 20 22 24 26
    if (n % 2 || n < 4)
    {
        return {-1, -1};
    }
    int mIN = 0, mAX = 0;
    if (n % 4 == 0)
        mAX = n / 4;
    else
        mAX = n / 4 - 1;

    if (n % 6 == 0)
        mIN = n / 6;
    else
        mIN = n / 6 + 1;

    return {mIN, mAX};
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> ans = solve(n);
    if (ans[0] == -1)
        cout << -1 << endl;
    else
        cout << ans[0] << " " << ans[1] << endl;
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
