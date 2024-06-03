// You are given a range represented by two integers L and R, and you should find the sum of the numbers in the range between L and R inclusive.

// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <iostream>
using namespace std;

void solve()
{
    long long l, r;
    cin >> l >> r;
    if(l>r)
        swap(l,r);
    long long sum = (r * (r + 1LL) / 2LL) - ((l - 1LL) * l / 2LL);
    cout << sum << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
