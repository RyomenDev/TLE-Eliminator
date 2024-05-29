// https://codeforces.com/problemset/problem/1475/A
// A. Odd Divisor

// ! already solved

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

void Vatsh()
{
    int n;
    cin >> n;

    double log2_n = log2(n);
    if (floor(log2_n) == log2_n)
        cout << "NO" << endl;
    else
         cout << "YES" << endl;

    // ! wrong
    // while (n % 2 == 0 && n > 0)
    // {
    //     long double log2_n = log2(n);
    //     if (floor(log2_n) == log2_n)
    //     {
    //         n = log2(n);
    //         cout << n << endl;
    //     }
    //     else
    //     {
    //         n /= 2;
    //         cout << n << endl;
    //     }
    // }
    // if (n > 1)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false); // Fast input/output
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
        Vatsh();

    return 0;
}