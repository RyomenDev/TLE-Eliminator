// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    ll n, m, a;
    cin >> n >> m >> a;
    ll count = 0;
    while (m > 0)
    {
        count += n / a + (n % a != 0);
        m -= a;
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}