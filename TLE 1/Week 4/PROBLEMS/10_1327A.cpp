// https://codeforces.com/problemset/problem/1327/A
// A. Sum of Odd Integers

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

string solve(int n, int k)
{
    if (n % 2 != 0)
    { // n is odd
        if (k % 2 != 0)
        { // k is odd
            if (k * k <= n)
                return "YES";
            else
                return "NO";
        }
        else
            return "NO";
    }
    else
    { // n is even
        if (k % 2 == 0)
        { // k is even
            if (k * k <= n)
                return "YES";
            else
                return "NO";
        }
        else
            return "NO";
    }
}

void Vatsh()
{
    // Your logic goes here
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
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