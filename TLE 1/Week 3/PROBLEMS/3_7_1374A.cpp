// https://codeforces.com/problemset/problem/1374/A
// A. Required Remainder

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9
/*
1) First, we find the remainder when N is divided by X, i.e., (n - y) % x. This gives us the distance between N and the next multiple of X after N that leaves a remainder of Y.
2) Then, we subtract this remainder from N to find the largest number less than or equal to N that satisfies the condition. This gives us n - (n - y) % x.
    remainder = (N−Y)modX
    largest_number = N−remainder = N−((N−Y)modX)

3) If the result is greater than N, we subtract X to find the largest number less than or equal to N that satisfies the condition. This is because we want the maximum integer less than or equal to N. (optional)
*/
int solve(int x, int y, int n)
{
    // int ans = n - (n - y) % x;
    // return ans <= n ? ans : ans - x;
    return n - (n - y) % x;
}

void Vatsh()
{
    // Your logic goes here
    int x, y, n;
    cin >> x >> y >> n;
    cout << solve(x, y, n) << endl;
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