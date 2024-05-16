// https://www.hackerrank.com/challenges/summing-the-n-series/problem

// Summing the N series

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    // tn=2n-1
    n %= mod;
    int ans = n * n;
    ans %= mod;
    cout << ans << endl;
    return;
    // or sum of ap formula
    // int ans = (n* (2*a+(n-1)*d)) / 2; // a=1,d=2
    // ans %= mod;
    // cout << ans << endl;
    // return;
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