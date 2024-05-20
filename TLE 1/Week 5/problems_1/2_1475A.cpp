// https://codeforces.com/problemset/problem/1475/A
// A. Odd Divisor

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

// string solve(int n)
// {
//     if (n % 2)
//         return "YES";
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (i % 2 || (n / i) % 2) // odd
//             {
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }
string solve(int n)
{
    if (n % 2)
        return "YES";
    while (n % 2 == 0)
        n /= 2;
    if (n > 1)
        return "YES";
    return "NO";
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
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}