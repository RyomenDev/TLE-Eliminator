//  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
// Given 4 numbers A , B, C and D. Print the last 2 digits from their Multiplication.

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100, b %= 100, c %= 100, d %= 100;

    ll ans = a * b * c * d;
    ans %= 100;
    string res = to_string(ans);
    if (ans < 10)
        res = "0" + res;

    cout << res << endl;
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