// https://www.hackerrank.com/challenges/number-groups/problem

// Number Groups

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

int solve(int k)
{
    int n = (k * (k - 1)) / 2 + 1; // first element if even
    int a = 2 * n - 1;  // first element if odd

    // or a = k*(k-1)+1;
    int sum = a * k + (k - 1) * k;
    return sum;
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    cout << solve(n) << endl;
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