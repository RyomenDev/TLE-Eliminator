
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

// Print the Fibonacci number of N
ll fib(ll n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    ll a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

void Vatsh()
{
    // Your logic goes here
    ll n;
    cin >> n;
    cout << fib(n) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fib(51);
    ll tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}