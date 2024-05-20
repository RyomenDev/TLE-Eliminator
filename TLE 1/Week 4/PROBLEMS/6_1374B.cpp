// https://codeforces.com/problemset/problem/1374/B
// B. Multiply by 2, divide by 6

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

// vector<pair<int, int>> factors
// {
// }

int solve(int n)
{
    // vector<pair<int, int>> fact;
    int moves = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
        }
        else
        {
            return -1;
        }
        moves++;
    }
    return moves;
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